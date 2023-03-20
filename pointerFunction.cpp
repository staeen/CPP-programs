/*
Pointers Exercise
*/
#include <iostream>
using namespace std;

void print(int *p)
{

    cout << *p << endl;
}
void update(int *p)
{

    //    p = p + 1;
    //    cout << " Inside update " << p << endl;
    *p = *p + 1;
}

int getsum(int *arr, int n)
{
    cout << " Size : " << sizeof(arr) << endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += i[arr];
    }
    return sum;
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 8};
    int value = 5;
    int *p = &value;
    // print(p);
    cout << " Before " << *p << endl;
    update(p);
    cout << " After " << *p << endl;
    cout << " For array sum " << endl;
    int z = getsum(arr + 3, 3);
    cout << " Sum is " << z << endl;
    return 0;
}
