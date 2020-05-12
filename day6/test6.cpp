/**
 *
 * 创建线程
 *  pthread_create创建一个新的线程
 *
 *  参数：
 *      thread: 指向线程标识符指针
 *      attr: 一个不透明的属性对象， 可以被用来设置线程属性。可以指定线程属性对象，也可以使用默认值NULL。
 *      start_routine: 线程运行函数起始地址，一旦线程被创建就会执行。
 *      arg: 运行函数的参数。它必须通过把引用作为指针强制转换为void类型进行传递。如果没有传递参数，则使用NULL
 *
 * 创建成功时，函数返回0， 若返回值不为0 则说明创建线程失败。
 *
 * 终止线程:
 *  pthread_exit(status)
 *
 *  pthread_exit 用于显式地推出一个线程。通常情况下，pthread_exit() 函数实在仙鹤草呢个完成工作后无需继续存在时被调用。
 *  如果main()是在它所创建的线程之前结束，并通过pthread_exit()退出，那么其他线程将继续执行。否则，他们将 main()结束时自动被终止
 *
 *
 **/

#include <iostream>
// 必须的头文件
#include <pthread.h>

using namespace std;

#define NUM_THREADS 5

// 线程的运行函数
void *say_hello(void *args)
{
    cout << "Hello Linn!" << endl;
    return 0;
}

int main()
{
    // 定义线程的 id 变量，多个变量使用数组
    pthread_t tids[NUM_THREADS];
    for (int i = 0; i < NUM_THREADS; ++i)
    {
        //参数依次是：创建的线程id,线程参数，调用的函数，传入的函数参数
        int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
        if (ret != 0)
        {
            cout << "pthread_create error:error_code =" << ret << endl;
        }
    }
    // 等各个线程退出后，进程才结束，否则进程强制结束了，线程可能还没有反应过来；
    pthread_exit(NULL);
}
