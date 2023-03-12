/*
DNF or Dutch National Flag sorting algorith to sort array of 0, 1, 2 
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

void dnfSort(int arr[], int n)
{
    cout << "Sorting 0 and 1 :" << endl;
    int low = 0, mid = 0;
    int high = n-1;
   while (mid<=high)
   {
    if (arr[mid]==0)
    {
        //swap array low and mid and increment both mid and low
        int temp = arr[low];
        arr[low] = arr[mid];
        arr[mid] = temp;
        low++;
        mid++;      
    }
    else if (arr[mid]==1)
    {
        //right position increment mid
        mid++;  
    }
    else
    {
        //if arr[mid]== 2 swap mid with high and decrement high
        int temp = arr[mid];
        arr[mid] = arr[high];
        arr[high] = temp;
        high--;
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
    dnfSort(arr, size);
    return 0;
}