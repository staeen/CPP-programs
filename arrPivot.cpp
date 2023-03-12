/*
pivot in an array
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

int main()
{
    int size;
    cout << "Enter size of array less than 100" << endl;
    cin >> size;
    int arr[100];
    cout << "Enter " << size << " values of array in ascending order : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout<<"Pivot is at index: "<<getPivot(arr,size)<<endl;
    return 0;
}