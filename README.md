# IES展示软件与单片机通信程序
## Qt简单GUI与串口通信+STM32的串口通信

---------------------------------------------------------------------------------------------

## 使用说明
### 单片机
单片机的程序再接电并 **按完RESET按钮后** 是自动运行的，不需要手动操作。
单片机型号:STM32F429IGT6，和CH340模块连接:
+ 5V-5V
+ GND-GND
+ PA9-RXD
+ PA10-TXD
将CH340直接接在树莓派的任意USB接口即可
连接后使用前按下RESET按钮即可开始自动接收和发送串口信息
收到程序发送的(自动进行，也可使用串口调试助手实验)"start"后会开始发送两行数据。
*单片机只使用CH340的5V供电即可*

__注意：请不要接学生电源！尤其不要接大电流！！烧毁请赔偿QAQ__

---------------------------------------------------------------------------------------------

### 树莓派
__如非必要请勿更改系统设置以及对MicroSD卡做任何改动，请勿在接电时插拔MicroSD卡__，易造成数据丢失和卡的物理损坏。

#### 接电
树莓派使用侧面的MicroUSB接口供电，就是最边上那个(离网口最远那个)，直接插USB电源上就行了。接电后系统将自动启动。
小风扇不用管，让它转就行，避免过热

#### 连接
1. 方式1：使用鼠标键盘和显示器
    使用USB接口插鼠标和键盘，使用HDMI接口连接显示器，如果显示器时VGA接口的需要转换线，使用HDMI接口的需要HDMI线。
    > __启动后如需登录，用户名：`pi`,密码：`raspberry`，全部小写，输入密码时不会出现任何字符但是是输入进去了。__
2. 方式2：使用网线进行远程访问
    1. 使用路由器进行连接
        * 将树莓派用网线连接路由器，电脑也连接同一路由器(wifi与网线连接都行)，登录路由器管理界面(一般为       `192.168.1.1`)，并查看树莓派的ip地址。
        * 使用putty等SSH工具，地址填写树莓派的ip地址，端口默认22，连接点击"是"，登录用户名与密码同上，连接后会显示`pi@raspberrypi:~ $`字样
        * 输入`vncserver` 回车，即可
        * 关闭putty，打开Tight VNC viewer软件
        * "**Remote Host**"填写树莓派ip地址,后加"__:1__"，例如`192.168.1.101:1`,点击连接，密码同登录密码
        * 出现树莓派桌面，一开始会有一个"**Warning**"，关掉那个提示就行。
    2. 直接连接电脑
        * 将树莓派用网线直接与电脑连接，电脑打开允许分享网络连接，参考网页：
            1. https://blog.csdn.net/u013895577/article/details/79579161
            2. https://www.linuxidc.com/Linux/2016-09/135474.htm
        
        * 通过windows命令提示符查找树莓派的ip地址，参考上述网页
        * *使用SSH工具如putty对树莓派进行连接，方法同"1"*

#### 在树莓派中打开目标执行文件
* 在VNC软件的图形界面中，打开终端，输入：`cd ./IESexpo/`回车
* 然后输入：`./IESexpo`回车，即可打开目标软件，点击最大化即可使用。

#### 树莓派关闭
关闭使用命令行输入：`sudo init 0`,或直接使用右上角关机按钮即可，当VNC连接断开时(小风扇可能还在转，没有关系)即可拔下电源与网线。

---------------------------------------------------------------------------------------------

### 软件的使用
1. 第一个界面，IES算例，左侧为节点图，右侧为数据表格，下方左侧按钮可以交替变成*并网*和*不并网*两种情况，表格也会发生相应变化，表格下方左右箭头可以变化上方显示的表格，可以参考以前的演示视频。
2. 第二个界面，参数，左侧是可变参数的表格以及参数选项，右侧是参数不变的表格，下方左右箭头按钮作用同上，左侧修改参数点击会打开串口界面，显示原始数据，*再点击一次*即可关闭串口界面并还原数据。
参数改变后第一页的数据以及第二页左侧表格的数据会发生相应变化并显示色块。
3. 第三页第四页为相应的图，图中的中文字符使用Ps重制，背景改为透明。
4. 第五页仅为软件说明。

---------------------------------------------------------------------------------------------

## __设备请小心使用__

### Arthur：Phantom_T