/*
Program to sort zero and one
*/
#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n)
{
    cout << "Sorting 0 and 1 :" << endl;
    int i = 0, j = n - 1;
    while (i < j)
    {
        while (arr[i] == 0)
        {
            i++;
        }
        while (arr[j] == 1)
        {
            j--;
        }
        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    printArray(arr, n);
}
int main()
{
    int size;
    cout << "Enter size of array less than 100" << endl;
    cin >> size;
    int arr[100];
    cout << "Enter " << size << " values of array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sortOne(arr, size);
    return 0;
}