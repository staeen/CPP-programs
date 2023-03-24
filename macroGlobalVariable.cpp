/*
Macros
*/
#include <iostream>
#define PI 3.14 // macro
using namespace std;

int score = 15; // global variables

void b(int &i)
{
    cout << "Inside b() " << i << " Score " << score << endl;
}

void a(int &i)
{
    cout << "Inside a() " << i << " Score " << score << endl;
    b(i);
}

int main()
{
    int i = 5;
    a(i);
    int r = 5;
    int area = PI * r * r;
    cout << "Area is " << area << endl;
    cout<<"Inside main() "<<r<<" Score "<<score<<endl;
    return 0;
}
