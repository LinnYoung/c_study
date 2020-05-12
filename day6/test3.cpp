/**
 *  # 和## 运算符
 *  #和## 预处理预算符号在 c++ 和 ANSI/ISO C中都是可用的。
 *  # 运算符会把 replacement-text 令牌转换为用引号引起来的字符串
 *  ## 运算符用于连接两个令牌
 *
 * */
#include <iostream>
using namespace std;

#define MKSTR(x) #x

#define CONCAT(x, y) x##y

int main()
{
    int xy = 100;
    int llll = 10000;

    cout << CONCAT(x, y) << endl;

    cout << CONCAT(ll, ll) << endl;
    cout << MKSTR(HELLO C++) << endl;
    return 0;
}

// 结果为： HELLO C++
