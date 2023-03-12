/*
Printing the unique element of an array
input = [1,2,3,2,1]
output = [3]
*/
#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;

void findUnique(int arr[],int n){
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result = result ^ arr[i];
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