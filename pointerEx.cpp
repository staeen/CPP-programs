/*
Pointers Exercise
*/
#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int a = num;
    int *p=&num;
    (*p)++;
    a++;
    cout << num << endl;
    cout << a << endl;
    int *q=p;
    cout << *q << endl;
    cout << (*q)+(*p) << endl;
    return 0;
}
