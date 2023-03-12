/*
Swapping alternate element of an array
*/
#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;

void altSwap(int arr[],int n){
    int temp;
    cout<<"Swapping alternate"<<endl;
    for (int i = 0; i < n; i+=2)
    {
        if (i+1<n)
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        
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
        altSwap(arr,size);
    return 0;
}