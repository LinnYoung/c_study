#include <iostream>
using namespace std;

class Adder
{
private:
    // 对外隐藏数据
    int total;

public:
    // 构造函数
    Adder(int i = 0)
    {
        total = i;
    }

    // 对外接口
    void addNum(int number)
    {
        total += number;
    }

    int getTotal()
    {
        return total;
    }
};

int main(void)
{
    Adder adder(10);
    adder.addNum(100);
    adder.addNum(50);
    cout << "Total: " << adder.getTotal() << endl;
    return 0;
}
//接下来： 抽象类
