/*
Object Oriented Programming
single inheritance
*/
#include <iostream>

using namespace std;

class Animal
{
public:
    int age;
    int weight;

public:
    void speak()
    {
        cout << "Speaking " << endl;
    }
};

class Dog : public Animal
{
};
int main()
{
    Dog d;
    cout << d.age << endl;
    d.speak();
    return 0;
}
