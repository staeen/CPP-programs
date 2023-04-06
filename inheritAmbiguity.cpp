/*
Object Oriented Programming
ambugity in inheritance
*/
#include <iostream>

using namespace std;


class A
{
public:
    void fun()
    {
        cout << "I'm A " << endl;
    }
};
class B
{
public:
    void fun()
    {
        cout << "I'm B " << endl;
    }
};
class C : public A,public B
{
};
int main()
{
    C c;
    c.A::fun();
    c.B::fun();
    return 0;
}
