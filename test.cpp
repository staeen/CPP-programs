/*
Pointers Exercise
*/
#include <iostream>
using namespace std;

int main()
{
    int i = 5;
    int *p1 = &i;
    int **p2 = &p1;
    int ***p3 = &p2;
    cout << "Mem Loc : " << p1 << " Value : " << *p1 << endl;
    cout << "Mem Loc : " << p2 << " Value : " << *p2 << endl;
    cout << "Mem Loc : " << p3 << " Value : " << *p3 << endl;
    return 0;
}
