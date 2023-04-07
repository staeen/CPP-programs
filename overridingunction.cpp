/*
Object Oriented Programming
polymorphism
run time polymorphism/dynamic polymorphism
Method overriding
*/
#include <iostream>

using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "Speaking " << endl;
    }
};
class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Barking " << endl;
    }
};

int main()
{
    Dog g;
    g.speak();
    return 0;
}
