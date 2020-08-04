#include <iostream>
using namespace std;

// int main()
// {
//     double *pvalue = NULL; // 初始化为NUll的指针
//     pvalue = new double;   // 为变量请求内存
//     *pvalue = 29494.99;    //在分配的地址存储值
//     cout
//         << "value of palue: " << *pvalue << endl;
//     delete pvalue; // 释放内存
//     return 0;
// }

class Box
{
public:
    Box()
    {
        cout << "构造函数" << endl;
    };
    ~Box()
    {
        cout << "析构函数" << endl;
    };
};
int main()
{
    Box *box = new Box[4];
    delete[] box;
    return 0;
}
