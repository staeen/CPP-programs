/*
Bubble Sort program
Space Complexity is O(1)
Time Complexity is O(n^2)
Best case array already sorted O(n)
Worst case O(n^2)
*/
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    // for round 1 to n-1
    {
        bool swapped = false;
        for (int j = 0; j < n - i; j++)
        {
            // process element till n-i index
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break; // already sorted
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[100] = {43, 56, 32, 7, 21, 9, 12};
    bubbleSort(arr, 7);
    return 0;
}