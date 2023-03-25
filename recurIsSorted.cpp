/*
Recursion
*/
#include <iostream>
using namespace std;

bool isSorted(int *arr, int n)
{
    if ((n == 1) || (n == 1)) // base case
        return true;
    if (arr[0] > arr[1])
        return false;
    else
    {
        bool ans = isSorted(arr + 1, n - 1); // recursive function
        return ans;
    }
}

int main()
{
    int arr[8] = {0, 1, 5, 8, 10, 13, 17, 18};
    int size = 8;
    bool res = isSorted(arr, size);
    if (res)
    {
        cout << "Array is sorted " << endl;
    }
    else
    {
        cout << "Array not sorted " << endl;
    }

    return 0;
}
