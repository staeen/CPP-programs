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
    Hero y;
    cout << endl;
    Hero *z = new Hero(10);
    cout << z->getHealth() << endl;
    Hero temp(22, 'B');
    cout << temp.getHealth() << endl;
    cout << temp.getLevel() << endl;
    return 0;
}
