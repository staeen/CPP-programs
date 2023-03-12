/*
Binary search
*/
#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int binSearch(int arr[], int n, int key)
{
    cout << "Searching :" << endl;
    int start = 0, end = n - 1;
    int mid = (start + end) / 2;
    //mid = start + (end-start)/2; helpful if value of mid gets beyond the range of int
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
        //mid = start + (end-start)/2;  helpful if value of mid gets beyond the range of int
   }
    return -1;
}
int main()
{
    int size, key;
    cout << "Enter size of array less than 100" << endl;
    cin >> size;
    int arr[100];
    cout << "Enter " << size << " values of array in ascending order : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element to search" << endl;
    cin >> key;
    int result = binSearch(arr, size, key);
    if (result == -1)
    {
        cout << "Element not found " << endl;
    }
    else
    {
        cout << key << " found at " << result << " index " << endl;
    }
    return 0;
}