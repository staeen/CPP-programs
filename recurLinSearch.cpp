/*
Recursion
*/
#include <iostream>
using namespace std;

bool searchLinear(int *arr, int n, int k)
{
    if (n == 0)
        return false;
    if (arr[0] == k)
        return true;
    else
    {
        bool ans = searchLinear(arr + 1, n - 1, k);
        return ans;
    }
}

int main()
{
    int arr[8] = {0, 1, 5, 8, 10, 13, 17, 18};
    int size = 8;
    int key = 7;
    bool res = searchLinear(arr, size, key);
    if (res)
    {
        cout << "Key found" << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }
    return 0;
}
