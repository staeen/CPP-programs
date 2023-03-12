/*
Finding Max and Min of an array
*/
#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;

int getMax(int num[],int n){
    int max=INT_MIN;
    for (int i = 0; i < n; i++)
    {   
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}

int getMin(int num[],int n){
    int min=INT_MAX;
    for (int i = 0; i < n; i++)
    {   
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
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
    cout<<"Max is :"<< getMax(arr,size) <<endl;
    cout<<"Min is :"<< getMin(arr,size) <<endl;
    return 0;
}