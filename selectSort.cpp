/*
Selection Sort program
Space Complexity is O(1)
Time CComplexity is O(n^2)
Best case array already sorted O(n^2)
Worst case O(n^2) 
*/
#include <iostream>
using namespace std;

void selectSort(int arr[], int n)
{
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

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[100] = {43, 56, 32, 7, 21, 9, 12};
    selectSort(arr, 7);
    return 0;
}