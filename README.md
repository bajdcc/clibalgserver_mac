# clibalgserver

【本用于适合在Mac下的Clion编译】

参见：[【算法可视化计划】启程](https://zhuanlan.zhihu.com/p/83573660)

实现一个算法可视化网站。

代码：C++。

## 介绍

算法用C语言实现，通过后端处理将C代码编译成可视化步骤。

## 注意

请先自行编译安装libevent库，lib路径为`/usr/local/bin`。

当前项目只支持编译64位程序。
使用Clion在MacOS High Sierra及Ubuntu 19.04（64位）上编译通过。

使用Clion运行时，请将运行配置中的Working Directory设置成项目根目录，否则会报`/sys/entry not found`错误。

## 前端技术栈

- jQuery
- LayUI
- layx
- Vue
- Ace editor
- eventbus
- Chartjs
- Gojs

## 调试接口

```cpp
// 控制台输出
void trace_log(char* text);
// 追踪单个变量
void trace_var(char* name, void* arr, int type);
// 追踪一维数组
void trace_array_1d(char* name, void* arr, int type, int cols);
// 追踪二维数组
void trace_array_2d(char* name, void* arr, int type, int rows, int cols);
// 取消追踪
void trace_end(char* name);
// 设置原子操作
void trace_rapid(int flag);
// 追踪一维数组图表
void trace_array_1d_chart(char* name, void* arr, int type, int cols);
// 追踪图（邻接矩阵）
void trace_graph(char* name, void* id, void* adj, int inf, int type, int n);
// 等待
void trace_delay(int flag);
```

## 知乎文章列表

- [​【算法可视化计划】启程](https://zhuanlan.zhihu.com/p/83573660)
- [​【算法可视化计划】虚拟系统](https://zhuanlan.zhihu.com/p/83863115)
- [【算法可视化计划】变量跟踪](https://zhuanlan.zhihu.com/p/84017677)
- [【算法可视化计划】图表呈现](https://zhuanlan.zhihu.com/p/84395451)

## 截图

![main](https://raw.githubusercontent.com/bajdcc/clibalgserver/master/screenshots/1.gif)

![main](https://raw.githubusercontent.com/bajdcc/clibalgserver/master/screenshots/1.png)

![main](https://raw.githubusercontent.com/bajdcc/clibalgserver/master/screenshots/2.png)

![main](https://raw.githubusercontent.com/bajdcc/clibalgserver/master/screenshots/3.png)

![main](https://raw.githubusercontent.com/bajdcc/clibalgserver/master/screenshots/4.png)

![main](https://raw.githubusercontent.com/bajdcc/clibalgserver/master/screenshots/5.png)

![main](https://raw.githubusercontent.com/bajdcc/clibalgserver/master/screenshots/6.png)
