/**
 *
 * *多态按字面的意思就是多种形态。当类之间存在层次结构，并且类之间是通过继承关联时，就会用到多态。
    C++ 多态意味着调用成员函数时，会根据调用函数的对象的类型来执行不同的函数。
 *
 * **/

#include <iostream>
using namespace std;

class Shape
{
protected:
    int width, height;

public:
    Shape(int a = 0, int b = 0)
    {
        width = a;
        height = b;
    }

    /**
     *  虚函数
      * */
    virtual int area()
    {
        cout << "Parent class area:" << endl;
        return 0;
    }

    /**
     *  加了virtual 最终输出
     *          矩形面积！！！
                矩形面積：70
                三角形面积！！！
                三角形面積：25
     *
     *
     * 未加 virtual 最终输出
     *          Parent class area:
                矩形面積：0
                Parent class area:
                三角形面積：0
     *
     * */
};

// 矩形
class Rectangle : public Shape
{
public:
    Rectangle(int a = 0, int b = 0) : Shape(a, b) {}

    virtual int area()
    {
        cout << "矩形面积！！！" << endl;

        return (width * height);
    }
};

// 三角形
class Triangle : public Shape
{
public:
    Triangle(int a = 0, int b = 0) : Shape(a, b) {}

    virtual int area()
    {
        cout << "三角形面积！！！" << endl;
        return (width * height / 2);
    }
};

int main()
{
    Shape *shape;
    Rectangle rec(10, 7);
    Triangle tri(10, 5);

    // 存储举行地址的地方
    shape = &rec;

    // 调用举行的球面级函数 area
    double S = shape->area();
    cout << "矩形面積：" << S << endl;

    // 存储三角形的地址
    shape = &tri;

    // 调用三角形的求面积函数

    S = shape->area();
    cout << "三角形面積：" << S << endl;

    return 0;
}
