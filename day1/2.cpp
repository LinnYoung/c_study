/**使用（）重载求3+6+…+3n>7000的最小n值*/

#include <iostream>
using namespace std;

class F
{
public:
    F(int i = 0) : m_nSum(i)
    {
        cout << "i的值： " << i << endl;
        cout << "M的值：" << m_nSum << endl;
    }

    // 函数对象类中的重载函数调用运算符
    int operator()()
    {
        int sum = 0, i = 1;
        cout << "m_nSum的值： " << m_nSum << endl;
        while (sum < m_nSum)
        {
            sum += 3 * i;
            ++i;
        }
        cout << "i最后值为： " << i << endl;
        return --i; // 将多加的一个去掉
    }

private:
    int m_nSum;
};

int main()
{
    F f(70000);          // 创建一个函数对象
    cout << f() << endl; // 隐含调用f.operator()()
    return 0;
}
