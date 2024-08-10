#include "can_port.hpp"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

static const char *TAG = "CanPort"; // 定义 TAG 用于错误日志

void CanPort::Init()
{
    twai_general_config_t g_config = TWAI_GENERAL_CONFIG_DEFAULT((gpio_num_t)CAN_TX, (gpio_num_t)CAN_RX, TWAI_MODE_NORMAL);
    twai_timing_config_t t_config = TWAI_TIMING_CONFIG_1MBITS(); // Look in the api-reference for other speed sets.
    twai_filter_config_t f_config = TWAI_FILTER_CONFIG_ACCEPT_ALL();

    // Install TWAI driver
    if (twai_driver_install(&g_config, &t_config, &f_config) == ESP_OK)
    {
        Serial.println("Driver installed");
    }
    else
    {
        Serial.println("Failed to install driver");
        return;
    }

    // Start TWAI driver
    if (twai_start() == ESP_OK)
    {
        Serial.println("Driver started");
    }
    else
    {
        Serial.println("Failed to start driver");
        return;
    }

    // Reconfigure alerts to detect TX alerts and Bus-Off errors
    uint32_t alerts_to_enable = TWAI_ALERT_TX_IDLE | TWAI_ALERT_TX_SUCCESS | TWAI_ALERT_TX_FAILED | TWAI_ALERT_ERR_PASS | TWAI_ALERT_BUS_ERROR;
    if (twai_reconfigure_alerts(alerts_to_enable, NULL) == ESP_OK)
    {
        Serial.println("CAN Alerts reconfigured");
    }
    else
    {
        Serial.println("Failed to reconfigure alerts");
        return;
    }

    // TWAI driver is now successfully installed and started
    driver_installed = true;
}

void CanPort::alert()
{
    if (!driver_installed)
    {
        ESP_LOGE(TAG, "CAN driver not installed, alert cannot be handled");
        return;
    }

    uint32_t alerts_triggered;
    ESP_ERROR_CHECK(twai_read_alerts(&alerts_triggered, pdMS_TO_TICKS(POLLING_RATE_MS)));
    twai_status_info_t twaistatus;
    ESP_ERROR_CHECK(twai_get_status_info(&twaistatus));

    if (alerts_triggered & TWAI_ALERT_ERR_PASS)
    {
        ESP_LOGW(TAG, "Alert: TWAI controller has become error passive.");
    }
    if (alerts_triggered & TWAI_ALERT_BUS_ERROR)
    {
        ESP_LOGE(TAG, "Alert: A (Bit, Stuff, CRC, Form, ACK) error has occurred on the bus.");
        ESP_LOGE(TAG, "Bus error count: %lu", twaistatus.bus_error_count);
    }
    if (alerts_triggered & TWAI_ALERT_TX_FAILED)
    {
        ESP_LOGE(TAG, "Alert: The Transmission failed.");
        ESP_LOGE(TAG, "TX buffered: %lu\tTX error: %lu\tTX failed: %lu", twaistatus.msgs_to_tx, twaistatus.tx_error_counter, twaistatus.tx_failed_count);
    }
    if (alerts_triggered & TWAI_ALERT_TX_SUCCESS)
    {
        ESP_LOGI(TAG, "Alert: The Transmission was successful.");
        ESP_LOGI(TAG, "TX buffered: %lu", twaistatus.msgs_to_tx);
    }
}

bool CanPort::canSend(uint8_t _id, uint8_t _cmd, uint8_t *txData, uint8_t _dataLen)
{
    if (!driver_installed)
    {
        ESP_LOGE(TAG, "CAN driver not installed, cannot send data");
        return false;
    }

    twai_message_t messageTx;
    messageTx.identifier = (_id << 7) | _cmd;
    messageTx.data_length_code = _dataLen;
    for (int i = 0; i < _dataLen; i++)
    {
        messageTx.data[i] = txData[i];
    }

    // 发送消息，如果失败，尝试重试
    int retry_count = 3; // 重试次数
    while (retry_count-- > 0)
    {
        if (twai_transmit(&messageTx, pdMS_TO_TICKS(1000)) == ESP_OK)
        {
            ESP_LOGI(TAG, "Message queued for transmission: identifiel = 0x%03X, data = ", messageTx.identifier);
            for (int i = 0; i < _dataLen; i++)
            {
                ESP_LOGI(TAG, "0x%02X ", messageTx.data[i]);
            }
            ESP_LOGI(TAG, "\n");
            return true;
        }
        else
        {
            ESP_LOGE(TAG, "Failed to queue message for transmission");
        }
        vTaskDelay(pdMS_TO_TICKS(100)); // 延迟 100ms 重试
    }
    return false;
}