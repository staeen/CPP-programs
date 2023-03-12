/*
Reversing an array
*/
#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;

void revArray(int arr[],int n){
    int temp, start=0,end=n-1;
    cout<<"After reversing the array"<<endl;
    while (start<=end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size;
    cout<<"Enter size of array less than 100"<<endl;
    cin>>size;
    int arr[100];
        cout<<"Enter "<<size<<" values of array : "<<endl;
        for (int i = 0; i < size; i++)
        {
            cin>>arr[i];
        }
    revArray(arr,size);
    return 0;
}