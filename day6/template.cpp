#include <iostream>
#include <string>

#include <vector>
#include <cstdlib>
#include <stdexcept>

using namespace std;

/**
 * 函数模板
 *
 * 形式：
 * template <class type> ret-type func-name (parameter list){}
 *
 * type 是函数所使用的数据类型的占位名称，这个名称可以在函数定义中使用
 *
 * 下面函数模板实例，返回两个值的最大值
 * */
template <typename T>
inline T const &Max(T const &a, T const &b)
{
    return a < b ? b : a;
}

/**
 * 类模板
 * template <class type> class class-name{}
 *
 * type 是占位符类型的名称，可以在类被实例化的时候进行指定。可以是一个逗号分隔的列表来定义多个泛型数据类型
 *
 * 下面实例定义了类Stack<>，并实现了泛型方法来对泛型方法来对元素进行入栈出栈操作：
 *
 * */

template <class T>
class Stack
{
private:
    vector<T>
        elems; // 元素
public:
    void push(T const &); // 入栈
    void pop();           // 出栈
    T top() const;        // 返回栈顶元素
    bool empty() const    // 如果为空则返回真
    {
        return elems.empty();
    }
};

template <class T>
void Stack<T>::push(T const &elem)
{
    // 追加传入元素脚本
    elems.push_back(elem);
}

template <class T>
void Stack<T>::pop()
{
    if (elems.empty())
    {
        throw out_of_range("Stack<>::pop(): empty stack");
    }
    // 删除最后一个元素
    elems.pop_back();
}

template <class T>
T Stack<T>::top() const
{
    if (elems.empty())
    {
        throw out_of_range("Stack<>::top():empty stack");
    }
    // 返回最后一个元素的副本
    return elems.back();
}

int main()
{
    int i = 39;
    int j = 20;
    cout << "Max(i,j)：" << Max(i, j) << endl;
    double f1 = 13.5;
    double f2 = 20.7;
    cout << "Max(f1,f2)：" << Max(f1, f2) << endl;

    string s1 = "hello";
    string s2 = "world";
    cout << "Max(s1,s2): " << Max(s1, s2) << endl;

    // stack

    try
    {
        Stack<int> intStack;       // int 类型的栈
        Stack<string> stringStack; // string 类型的栈

        // 操作 int 类型的栈
        intStack.push(7);
        cout << "int：" << intStack.top() << endl;
        // 操作 string 类型的栈
        stringStack.push("hello");
        cout << "string：" << stringStack.top() << endl;
        stringStack.pop();
        stringStack.pop();
    }
    catch (exception const &e)
    {
        cerr << "exception:" << e.what() << endl;
        return -1;
    }

    return 0;
}
