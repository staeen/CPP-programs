/*
Object Oriented Programming
Constructor
this keyword
*/
#include <iostream>

using namespace std;

class Hero
{
private:
    string name;
    int health;
    char level;

public:
    Hero()
    {
        cout << "Default constructor";
    }
    Hero(int health) // parameterized constructor
    {
        this->health = health;
    }
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }
    Hero(Hero &temp)
    {
        cout<<"Copy Constructor called "<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }
    void print()
    {
        cout << "Player stat :" << endl;
    }
    string getName()
    {
        return name;
    }
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setName(string n)
    {
        name = n;
    }
    void setHealth(int n)
    {
        health = n;
    }
    void setLevel(char n)
    {
        level = n;
    }
};

int main()
{
    Hero h(70, 'B');
    // copy constructor
    Hero z(h);
    cout << "Z health " << z.getHealth() << endl;
    cout << "Z level " << z.getLevel() << endl;
    cout << "H health " << h.getHealth() << endl;
    cout << "H level " << h.getLevel() << endl;

    return 0;
}
