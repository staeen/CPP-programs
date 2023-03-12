/*
finding peak value in an array
*/
#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

void peakOcc(int arr[], int n)
{
    int start = 0, end = n - 1;
    int mid = (start + end) / 2;
    mid = start + (end-start)/2; //helpful if value of mid gets beyond the range of int
    while (start < end)
    {
        if (arr[mid] < arr[mid+1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        //mid = (start + end) / 2;
        mid = start + (end-start)/2;//  helpful if value of mid gets beyond the range of int
   }
    cout<<"Peak is :"<<start<<endl;
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
    peakOcc(arr, size);   
    return 0;
}