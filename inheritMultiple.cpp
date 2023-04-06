/*
Object Oriented Programming
multiple inheritance
*/
#include <iostream>

using namespace std;

class Animal
{
public:
    int age;
    int weight;

public:
    void bark()
    {
        cout << "Barking " << endl;
    }
};

class Human
{
public:
    string color;

public:
    void speak()
    {
        cout << "Speaking " << endl;
    }
};

class Hybrid : public Animal, public Human
{
};

int main()
{
    Hybrid h;
    h.bark();
    h.speak();
    return 0;
}
