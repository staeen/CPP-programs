/*
Pointers Exercise
*/
#include <iostream>
using namespace std;

void update(int ***p)
{

    // p = p + 1;  No Change
    // *p = *p + 1;  Change
    // **p = **p + 1; Change
    ***p = ***p + 1; // Change
}

int main()
{
    int i = 5;
    int *p1 = &i;
    int **p2 = &p1;
    int ***p3 = &p2;
    cout << "Mem Loc : " << p1 << " Value : " << *p1 << endl;
    cout << "Mem Loc : " << p2 << " Value : " << *p2 << endl;
    cout << "Mem Loc : " << p3 << " Value : " << *p3 << endl;
    cout << &i << endl;
    cout << p1 << endl;
    cout << *p2 << endl;
    cout << "Before " << i << endl;
    cout << "Before " << p1 << endl;
    cout << "Before " << p2 << endl;
    cout << "Before " << p3 << endl;
    update(p3);
    cout << "After " << i << endl;
    cout << "After " << p1 << endl;
    cout << "After " << p2 << endl;
    cout << "After " << p3 << endl;

    return 0;
}
