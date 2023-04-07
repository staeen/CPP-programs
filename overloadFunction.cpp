/*
Object Oriented Programming
polymorphism
compile time overloading
function overloading
*/
#include <iostream>

using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << "Hello Stanzen " << endl;
    }
    void sayHello(string name)
    {
        cout << "Hello " << name << endl;
    }
    void sayHello(string name1,string name2)
    {
        cout << "Hello " << name1 <<" "<<name2<< endl;
    }
};

int main()
{
    A a;
    a.sayHello();
    a.sayHello("Rabjam");
    a.sayHello("Rabjam","Tsegyal");
    return 0;
}
