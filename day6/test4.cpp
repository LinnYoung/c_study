/**
 * C++ 提供了下列预定义宏
 *  _LINE_ ：这会在程序编译时包含当前行号
 *  _FILE_ : 这会在程序编译时包含当前文件名
 *  _DATE_ : 这会包含一个形式为 month/day/year的字符串， 它表示把源文件转换为目标代码的日期
 *  _TIME_: 这会包含一个形式为hour:minute:second 的字符串，它表示程序被编译的时间
 *
 **/

#include <iostream>
using namespace std;

int main()
{
    cout << "Vaule of _LINE_: " << __LINE__ << endl;
    cout << "Vaule of _FILE_: " << __FILE__ << endl;
    cout << "Vaule of _DATE_: " << __DATE__ << endl;
    cout << "Vaule of _TIME_: " << __TIME__ << endl;

    return 0;
}
