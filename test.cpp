/*
Object Oriented Programming
hybrid inheritance
*/
#include <iostream>

using namespace std;

class D
{
public:
    void fund()
    {
        cout << "inside function D " << endl;
    }
};

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
class C : public A,public D
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
    c.fund();
    return 0;
}
