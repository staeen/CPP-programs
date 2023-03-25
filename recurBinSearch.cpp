/*
Recursion
*/
#include <iostream>
using namespace std;

bool searchBin(int *arr, int s, int e, int k)
{
    if (s > e)
        return false;
    int mid = s + (e - s) / 2;
    if (arr[mid] == k)
        return true;

    if (arr[mid] < k)
    {
        return searchBin(arr, mid + 1, e, k);
    }
    else
    {
        return searchBin(arr, s, mid - 1, k);
    }
}

int main()
{
    int arr[8] = {0, 1, 5, 8, 10, 13, 17, 18};
    int size = 8;
    int key = 5;

    bool res = searchBin(arr, 0, 7, key);
    if (res)
    {
        cout << "Key found " << endl;
    }
    else
    {
        cout << "Key not found " << endl;
    }
    return 0;
}
