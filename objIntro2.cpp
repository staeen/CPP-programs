/*
Object Oriented Programming
getter and setter
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
    Hero h, l;          // static allocation
    Hero *z = new Hero; // dynamic allocation
    h.setName("Tux");
    h.setHealth(60);
    h.setLevel('B');
    l.setName("Bauzer");
    l.setHealth(80);
    l.setLevel('B');
    z->setName("batman"); // dynamically
    z->setHealth(50);
    z->setLevel('A');
    h.print();
    cout << "Name :" << h.getName() << endl;
    cout << "Health :" << h.getHealth() << endl;
    cout << "Level :" << h.getLevel() << endl;
    l.print();
    cout << "Name :" << l.getName() << endl;
    cout << "Health :" << l.getHealth() << endl;
    cout << "Level :" << l.getLevel() << endl;
    (*z).print();
    cout << "Name :" << (*z).getName() << endl;
    cout << "Health :" << (*z).getHealth() << endl;
    cout << "Level :" << (*z).getLevel() << endl;
    return 0;
}
