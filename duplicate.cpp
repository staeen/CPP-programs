/*
Printing duplicate
*/
#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;

void findUnique(int arr[],int n){
    int result = 0;
    //XOR ing array
    for (int i = 0; i < n; i++)
    {
        result = result ^ arr[i];
    }
    //XOR ing result
    for (int i = 1; i < n; i++)
    {
        result = result ^ i;
    }
    cout<<"Unique element is "<<result<<endl;
}

int main(){
    int size;
    cout<<"Enter odd size of an array less than 100"<<endl;
    cin>>size;
    int arr[100];
        cout<<"Enter "<<size<<" values of array : "<<endl;
        for (int i = 0; i < size; i++)
        {
            cin>>arr[i];
        }
        findUnique(arr,size);
    return 0;
}