/*
Function to search an element of a rotated array
complexity O(logn)
*/
#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int getPivot(int arr[], int n){
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    while (s<e)
    {
        if (arr[mid]>=arr[0])
        {
            s=mid+1;    
        }
        else
        {
            e=mid;  
        }
        mid=s+(e-s)/2;
    }
    
    return s;
}
int binarySearch(int arr[],int s,int e,int key){
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;
    while (start<end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if (key>arr[mid])
        {
            start=mid + 1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;        
    }
    return -1;
}
int findPosition(int arr[],int size,int k){
    int pivot=getPivot(arr,size);
    if (k>=arr[pivot] && k<=arr[size-1])
    {
        return binarySearch(arr,pivot,size-1,k);
    }
    else
    {
        return binarySearch(arr,0,pivot-1,k);
    }
}
int main()
{
    int size,k;
    cout << "Enter size of array less than 100" << endl;
    cin >> size;
    int arr[100];
    cout << "Enter " << size << " values of array in ascending order : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter key to search" << endl;
    cin >> k;
    
    
    cout<<"Element is at index: "<<findPosition(arr,size,k)<<endl;
    return 0;
}