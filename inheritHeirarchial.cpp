/*
Object Oriented Programming
heirarchical inheritance
*/
#include <iostream>

using namespace std;

class A
{
public:
    void funa()
    {
        cout << "inside function A " << endl;
    }
};
class B : public A
{
public:
    void funb()
    {
        cout << "inside function B " << endl;
    }
};
class C : public A
{
public:
    void func()
    {
        cout << "inside function C " << endl;
    }
};
int main()
{
    A a;
    a.funa();
    B b;
    b.funa();
    b.funb();
    C c;
    c.funa();
    c.func();
    return 0;
}
