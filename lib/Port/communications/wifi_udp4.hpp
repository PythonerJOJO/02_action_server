#ifndef WIFI_DUP_HPP
#define WIFI_DUP_HPP
#include <config.hpp> // 包含配置文件
#include <micro_ros_platformio.h>

class WiFiDup
{
private:
    bool connectWiFiFlag;

public:
    WiFiDup(bool _connectWiFiFlag) : connectWiFiFlag(_connectWiFiFlag)
    {
        if (this->connectWiFiFlag)
        {
            // 设置通过WIFI进行MicroROS通信
            IPAddress agent_ip;
            agent_ip.fromString(AGENT_IP);
            // 设置wifi名称，密码，电脑IP,端口号
            set_microros_wifi_transports(WIFI_SSID, WIFI_PASSWORD, agent_ip, AGENT_PORT);
            // 延时时一段时间，等待设置完成
            delay(2000);
        }
    }
};

#endif // WIFI_UDP4_HPP