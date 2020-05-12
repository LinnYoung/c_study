/**
 * 信号是由操作系统传给进程的中断，会提早种植一个程序。在 UNIX 、 LINUX、Mac OS X 或者 Windows系统上，可以通过按ctrl+C 产生中断
 *
 * 有些信号不能被程序捕获，但是下表所列信号可以再程序中捕获，并可以基于信号采取适当的动作。这些是定义在
 * C++头文件 <csignal> 中。
 *
 *  SIGABRT: 程序的异常终止，如调用 abort。
 *  SIGFPE: 错误的算术运算 ，比如除以零或导致溢出的操作。
 *  SIGILL: 监测非法指令。
 *  SIGINT: 接收到交互注意信号。
 *  SIGSEGV: 非法访问内存。
 *  SIGTERM: 发送到程序的终止请求。
 *
 *  C++ 信号处理库提供了 signal 函数，用来捕获突发事件。
 *
 *  void (*signal (int sig, void(*func)(int)))(int);
 *
 *  这个函数接收两个参数： 第一个参数是一个整数，代表了信号的编号；第二个参数是一个指向信号处理的指针。
 *
 **/

#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void signalHandler(int signum)
{
    cout << "interrupt signal(" << signum << ")received. \n";
    // 清理并关闭
    // 终止程序
    exit(signum);
}

int main()
{
    int i = 0;

    // 注册信号 SIGINT 和信号处理程序
    signal(SIGINT, signalHandler);
    while (++i)
    {
        cout << "Going to sleep...." << i << endl;
        if(i==3){
            raise(SIGINT);
        }
        sleep(1);
    }
    return 0;
}
