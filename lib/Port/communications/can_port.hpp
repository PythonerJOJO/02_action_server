#ifndef CAN_PORT_HPP
#define CAN_PORT_HPP
#include <driver/twai.h>
#include "../../bsp_config.hpp"

#include <esp_log.h>
class CanPort
{
private:
    bool driver_installed;
    const uint8_t POLLING_RATE_MS = 1000; // 1 second

    void Init();
    void alert();

public:
    CanPort(CanPort &_canPorts)
    {
        Init();
    }

    bool canSend(uint8_t _id, uint8_t _cmd, uint8_t *txData, uint8_t _dataLen);
};
#endif // CAN_PORT_HPP