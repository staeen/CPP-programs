/*
Linear search in an Array
*/
#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;

int arrSearch(int num[],int n,int s){
    int pos=-1;
    for (int i = 0; i < n; i++)
    {   
       if (num[i]==s)
       {
        pos=i;
       }
       
    }
    return pos;
}
int main(){
    int size,search;
    cout<<"Enter size of array less than 100"<<endl;
    cin>>size;
    int arr[100];
        cout<<"Enter "<<size<<" values of array : "<<endl;
        for (int i = 0; i < size; i++)
        {
            cin>>arr[i];
        }
        cout<<"Enter an element to search"<<endl;
        cin>>search;
    int result = arrSearch(arr,size,search);
    if (result==-1)
    {
        cout<<search<<" is not in the array "<<endl;
    }else{
        cout<<search<<" is at "<< result<<" index"<<endl;
    }
    return 0;
}