# 超级电容用户手册

### 电气参数

* 输入电压 : 14V - 28V
* 输入电流 : +- 8A
* 输出电压 : 14V - 28V
* 输出电流 : +- 8A
* 电容电压 : 5V - 23V
* 电容电流 : +- 8A
* 电容充电功率 : 30W - 120W
* 电容放电功率 : MAX 120W

### 控制参数

* 闭环频率 : 20KHz
* 闭环类型 : 功率环 & 电流环
* 保护类型 : 电压 & 电流
* 自我诊断

### CAN协议

**TBD**

### 状态码 (启动)

| 状态码  |       指示灯描述        |    描述    |
|:----:|:------------------:|:--------:|
| NORM |       白灯闪x下        | 使用x号配置文件 |
| OVV  | 红蓝交替闪烁, 蓝灯点亮时间大于红灯 |  输入过压保护  |
| LOV  | 红蓝交替闪烁, 红灯点亮时间大于蓝灯 |  输入欠压保护  |
| CSE  |       红绿交替闪烁       |  电流采样异常  |

### 状态码 (运行)

| 状态码  |       指示灯描述        |   描述    |
|:----:|:------------------:|:-------:|
| CAPF |        绿灯常亮        |  电容冲满   |
| CAPC |        蓝灯常亮        |  电容充电   |
| CAPD |        红灯常亮        |  电容放电   |
| CAPL |        红灯闪烁        |  电容电量低  |
| OVV  | 红蓝交替闪烁, 蓝灯点亮时间大于红灯 | 输入过压保护  |
| LOV  | 红蓝交替闪烁, 红灯点亮时间大于蓝灯 | 输入欠压保护  |
| OVC  |       红绿交替闪烁       |  过流保护   |
| DRVE |        黄色闪烁        |  充放电异常  |
| CANE |        青色闪烁        | CAN通信异常 |