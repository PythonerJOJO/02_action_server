#ifndef ACCEPT_CTRL_ACTION_SERVER_HPP
#define ACCEPT_CTRL_ACTION_SERVER_HPP

#include <rcl/rcl.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

class AcceptCtrlActionServer
{
public:
    AcceptCtrlActionServer();
    ~AcceptCtrlActionServer();
    void run();   // 运行动作服务器任务
    void start(); // 启动动作服务器任务的FreeRTOS任务

private:
    rcl_allocator_t allocator;
    rclc_support_t support;
    rcl_node_t node;
    rclc_executor_t executor;
    TaskHandle_t taskHandle;

    static void AcceptCtrlActionServerTask(void *args); // 静态任务入口函数
};
#endif // ACCEPT_CTRL_ACTION_SERVER_HPP