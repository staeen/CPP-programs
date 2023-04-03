/*
Object Oriented Programming
Static keyword
*/
#include <iostream>
#include <cstring>

using namespace std;

class Hero
{
private:
    int health;
    char level;
public:
    char *name;
    static int timeToComplete;
    Hero()
    {
        cout << "Default constructor";
        name = new char[100];
    }
    Hero(int health) // parameterized constructor
    {
        this->health = health;
    }
    Hero(int health, char level, char name[])
    {
        this->name = name;
        this->health = health;
        this->level = level;
    }
    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }
    void print()
    {

        cout << "Player stat :" << endl;
        cout << "Name " << this->name << endl;
        cout << "Health " << this->health << endl;
        cout << "Level " << this->level << endl;
    }
    char getName()
    {
        return *name;
    }
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
    void setHealth(int n)
    {
        health = n;
    }
    void setLevel(char n)
    {
        level = n;
    }
    // descructor
    static int random(){
        return timeToComplete;
    }
    ~Hero()
    {
        cout << "Destructor called " << endl;
    }
};
int Hero::timeToComplete=5;

int main()
{
    cout<<"Time to complete "<<Hero::timeToComplete<<endl;
    cout<<Hero::random()<<endl;
    return 0;
}
