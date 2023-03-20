/*
Pointers Exercise
*/
#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {23, 122, 41, 67};
    cout << arr << endl;
    cout << arr[0] << endl;
    cout << &arr[1] << endl;
    cout << *arr << endl;
    cout << *arr + 1 << endl;
    cout << *(arr + 1) << endl;
    cout << arr[2] << endl;
    cout << *(arr + 2) << endl;
    int i = 3;
    cout << i[arr] << endl;
    cout << *(arr + i) << endl;

    int temp[10] = {1, 2};
    cout << sizeof(temp) << endl;
    cout << sizeof(*temp) << endl;
    cout << sizeof(&temp) << endl;
    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;  // address
    cout << sizeof(*ptr) << endl; // value at address
    cout << sizeof(&ptr) << endl; // address
}
