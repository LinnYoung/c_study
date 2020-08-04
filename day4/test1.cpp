#include <iostream>
using namespace std;
#define MAX 100;
int main()
{

    srand((unsigned)time(NULL)); ////srand()函数产生一个以当前时间开始的随机种子
    for (int i = 0; i < 10; i++)
    {
        cout << ":::::" << rand()% 100;
    }
}
