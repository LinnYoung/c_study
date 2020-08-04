#include <iostream>
using namespace std;

class Box
{
public:
    double getVolume(void)
    {
        return length * breadth * height;
    }

    void setLength(double len)
    {
        length = len;
    }

    void setBreadth(double bre)
    {
        breadth = bre;
    }

    void setHeight(double hei)
    {
        height = hei;
    }

    // 重载 + 运算符， 用于把两个Box对象相加(前面)
    Box operator+(const Box &b)
    {
        Box box;
        cout << "内存地址b: " << &b << endl;
        cout << "内存地址box:" << &box << endl;
        box.length = this->length + b.length;
        cout << "len： " << this->length << ' ' << b.length << endl;
        box.breadth = this->breadth + b.breadth;
        cout << "breadth: " << this->breadth << ' ' << b.breadth << endl;
        box.height = this->height + b.height;
        cout << "height: " << this->height << ' ' << b.height << endl;
        return box;
    }

private:
    double length;  // 长度
    double breadth; // 宽度
    double height;  // 高度
};

int main(void)
{
    Box Box1; // 申明Box1，类型为Box；
    Box Box2;
    Box Box3;
    double volume = 0.0; // 把体积存储在该变量中

    // box1 的属性设置
    Box1.setBreadth(7.0);
    Box1.setLength(6.0);
    Box1.setHeight(5.0);

    volume = Box1.getVolume();
    cout << "volume of box1: " << volume << endl;
    // box2
    Box2.setBreadth(13.0);
    Box2.setLength(12.0);
    Box2.setHeight(10.0);

    volume = Box2.getVolume();
    cout << "volume of box2: " << volume << endl;

    //box3 把两个对象相加 得到Box3
    Box3 = Box2 + Box1;
    cout << "box2的内存地址： " << &Box2 << endl;
    cout << "box1的内存地址： " << &Box1 << endl;
    volume = Box3.getVolume();
    cout << "Volume of Box3: " << volume << endl;
    return 0;
}
