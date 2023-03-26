/*
Recursion Select Sort
*/
#include <iostream>
using namespace std;

void selectSort(int *arr, int n)
{
    if (n == 0 || n == 1)
        return;
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }

    selectSort(arr, n - 1);
}

int main()
{
    int arr[7] = {43, 56, 32, 7, 21, 9, 12};
    selectSort(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
