#include <iostream>
using namespace std;

namespace frist_space
{
void func()
{
    cout << "inside first_space" << endl;
}
} // namespace frist_space

namespace second_space
{
void func()
{
    cout << "inside second_space" << endl;
}
} // namespace second_space

namespace A
{
void lll()
{
    cout << "A:;::" << endl;
}

namespace B
{
void lll()
{
    cout << "B:::" << endl;
}
} // namespace B
} // namespace A

using namespace A::B;

int main()
{
    frist_space::func();
    second_space::func();
    lll();
    return 0;
}

// 命名空间
