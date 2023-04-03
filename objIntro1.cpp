/*
Object Oriented Programming
*/
#include <iostream>

using namespace std;

class Hero
{
    // properties
public:
    string name;
    int health;
    char level;
    void print()
    {
        cout << "Player 1 stat :" << endl;
    }
};

int main()
{
    Hero h;
    h.name = "Stan";
    h.health = 70;
    h.level = 'A';
    h.print();
    cout << "Name :" << h.name << endl;
    cout << "Health :" << h.health << endl;
    cout << "Level :" << h.level << endl;
    return 0;
}
