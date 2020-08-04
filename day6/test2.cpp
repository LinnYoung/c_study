/**
 *  c++ 预处理器
 *  预处理器是一些指令，指示编译器在实际编译之前所需完成的预处理
 *  所有的预处理器指令都是以 #号开头，只有空格字符可以出现在预处理指令之前。预处理指令不是C++ 语句，所以它们不会以 ； 结尾
 *  c++ 还支持很多预处理指令，比如#include、#define、 #if 、#else 、#line 等
 *
 *
 *  #define macro-name replacement-text
 *  当这一行代码出现在一个文件中，在该文件中后续出现的所有宏都将会在程序编译前 被替换为 replacement-text
 *
 * */

#include <iostream>
using namespace std;

#define PI 3.14159

// 参数宏
#define MIN(a, b) (a < b ? a : b)

// 条件编译
#define DEBUG

int main()
{
    int i, j;
    i = 100;
    j = 10;

#ifdef DEBUG
    cerr << "Trace: Inside main function" << endl;
#endif

#if 0
    /* 这是注释部分 */
    cout << MIN(1, 2) << endl;
#endif

#if 1
    cout << MIN(1, 2) << endl;
#endif

    cout << "小值为：" << MIN(i, j) << endl;

#ifdef DEBUG
    cerr << "Trace: Coming out of main function" << endl;
#endif

    cout << "Value of PI :" << PI << endl;
    return 0;
}
