/*
Binary search to determine occurance ofan element
*/
#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    mid = start + (end-start)/2; //helpful if value of mid gets beyond the range of int
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        //mid = (start + end) / 2;
        mid = start + (end-start)/2;//  helpful if value of mid gets beyond the range of int
   }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    mid = start + (end-start)/2; //helpful if value of mid gets beyond the range of int
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        //mid = (start + end) / 2;
        mid = start + (end-start)/2;//  helpful if value of mid gets beyond the range of int
   }
    return ans;
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
    int first_result = firstOcc(arr, size, key);        
    int last_result = lastOcc(arr, size, key);
    if (first_result == -1 && last_result == -1)
    {
        cout<<"Element not found"<<endl;
    }
    else
    {
        cout<<key<<" first occured at index "<<first_result<<" and last occured at index "<<last_result<<endl;
    }
    
    
    return 0;
}