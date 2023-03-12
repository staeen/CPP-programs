/*
Insertion Sort program
Space Complexity is O(1)
Time Complexity is O(n^2)
Best case array already sorted O(n)
Worst case O(n^2)
*/
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    // using or loop
    /*   for (int i = 1; i < n; i++)
       {
           int temp = arr[i];
           int j = i - 1;
           for (; j >= 0; j--)
           {
               if (arr[j] > temp)
               {
                   // shift
                   arr[j + 1] = arr[j];
               }
               else
               {
                   break;
               }
           }
           arr[j + 1] = temp;
       }*/

    // using while loop
    int i = 1;
    while (i < n)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j + 1] = temp;
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[100] = {43, 56, 32, 7, 21, 9, 12};
    insertionSort(arr, 7);
    return 0;
}