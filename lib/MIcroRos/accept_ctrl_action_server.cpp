#include "accept_ctrl_action_server.hpp"

AcceptCtrlActionServer::AcceptCtrlActionServer()
{
    // 初始化内存分配器
    this->allocator = rcl_get_default_allocator();

    // 初始化 rclc_support_t 结构体
    rclc_support_init(&this->support, 0, NULL, &this->allocator);

    // 初始化 ROS2 节点
    rclc_node_init_default(&this->node, "accept_angle_action_server_node", "", &this->support);

    // 初始化执行器
    rclc_executor_init(&this->executor, &this->support.context, 1, &this->allocator);
}

AcceptCtrlActionServer::~AcceptCtrlActionServer()
{
    // 清理资源
    rclc_executor_fini(&this->executor);
    // rclc_node_fini(&this->node);
    rclc_support_fini(&this->support);
}

void AcceptCtrlActionServer::run()
{
    // 运行动作服务器任务的逻辑
    vTaskDelay(pdMS_TO_TICKS(1000)); // 启动延迟
    while (true)
    {
        rclc_executor_spin_some(&this->executor, RCL_MS_TO_NS(100));
        vTaskDelay(pdMS_TO_TICKS(100)); // 避免忙碌循环
    }
}

void AcceptCtrlActionServer::AcceptCtrlActionServerTask(void *args)
{
    AcceptCtrlActionServer *server = reinterpret_cast<AcceptCtrlActionServer *>(args);
    server->run();
}

void AcceptCtrlActionServer::start()
{
    // 在FreeRTOS任务中运行动作服务器
    xTaskCreatePinnedToCore(&AcceptCtrlActionServer::AcceptCtrlActionServerTask, "AcceptCtrlActionServerTask", 8192, this, 1, &this->taskHandle, 1);
}