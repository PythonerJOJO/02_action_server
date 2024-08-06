#include "common_inc.hpp"

// 定义的内存分配器类型，用于管理动态内存分配
rcl_allocator_t allocator;
// 用来简化 ROS2 节点、订阅者、发布者等组件初始化的结构体类型
// 包含了诸如节点名称、命名空间、参数服务器等信息，可以方便地传递给其他组件的初始化函数
rclc_support_t support;
// 代表一个 ROS2 网络中的节点
rcl_node_t node;
// 执行器类型，它负责调度订阅者回调函数、定时器回调函数、服务回调函数等
rclc_executor_t executor;

rcl_action_server_t action_server; // 创建一个 ROS2 动作服务器,用于接收来自 动作客户端 的控制

// 任务句柄，用于FreeRTOS任务
TaskHandle_t ActionServerTask, Task2;

// 任务1的函数
void actionServerTask(void *pvParameters)
{
  (void)pvParameters; // 避免编译器警告，不使用参数

  // 初始化内存分配器
  allocator = rcl_get_default_allocator();
  /**
   * @brief 获取默认的内存分配器,初始化 rclc_support_t 结构体
   * &support 指向 support 变量的地址，用来存放初始化后的 rclc_support_t 结构体
   * 0 表示节点的命名空间为空, NULL 表示没有使用自定义的命名空间解析器
   * &allocator 指向 allocator 变量的地址，用来指定内存分配器
   */
  rclc_support_init(&support, 0, NULL, &allocator);
  /**
   * @brief 初始化 ROS2 节点
   * @param
   *    1. &node 指向 node 变量的地址，用来存放初始化后的 rcl_node_t 结构体
   *    2. &support 指向 support 变量的地址，用来传递初始化后的 rclc_support_t 信息
   *    3. "hello_microros" 节点名称
   */
  rclc_node_init_default(&node, "hello_microros", "", &support);
  /**
   * @brief 初始化执行器
   * @param
   *    1. &executor 指向 executor 变量的地址，用来存放初始化后的 rclc_executor_t 类型的执行器
   *    2. &support.context 指向 support 结构体中 context 成员的地址，它包含了 ROS2 环境的相关信息
   *    3. 1 表示执行器中包含的回调函数数量
   *    4. &allocator 指向 allocator 变量的地址，用来指定内存分配器
   */
  rclc_executor_init(&executor, &support.context, 1, &allocator);

  while (true)
  {
    // 任务1的代码，比如初始化和运行ROS 2节点
    Serial.println("Task 1 is running...");
    vTaskDelay(pdMS_TO_TICKS(10));
    rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100));
  }
}

// 任务2的函数
void task2(void *pvParameters)
{
  (void)pvParameters; // 避免编译器警告，不使用参数

  while (true)
  {
    // 任务2的代码，比如执行其他任务
    Serial.println("Task 2 is doing other work...");
    vTaskDelay(pdMS_TO_TICKS(2000));
  }
}

void setup()
{
  Serial.begin(115200);
  WiFiDup wifiDup(true);

  // 创建任务1
  xTaskCreatePinnedToCore(actionServerTask, "Task1", 10000, NULL, 1, &ActionServerTask, ARDUINO_RUNNING_CORE);

  // 创建任务2
  xTaskCreatePinnedToCore(task2, "Task2", 10000, NULL, 1, &Task2, ARDUINO_RUNNING_CORE);
}

void loop()
{
}