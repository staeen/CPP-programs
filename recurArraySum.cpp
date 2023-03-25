/*
Recursion
*/
#include <iostream>
using namespace std;

int sumofArr(int *arr, int n)
{
    // base case
    if (n == 0)
        return 0;
    if (n == 1)
        return arr[0];
    else
    {
        return arr[0] + sumofArr(arr + 1, n - 1); // Recursive Function
    }
}

int main()
{
    int arr[8] = {0, 1, 5, 8, 10, 13, 17, 18};
    int size = 8;
    cout << sumofArr(arr, size) << endl;
    return 0;
}
