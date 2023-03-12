/*
Sum of elements of an array
*/
#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;

int arrSum(int num[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {   
       sum= sum + num[i];
    }
    return sum;
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
    cout<<"Sum is :"<< arrSum(arr,size) <<endl;
    return 0;
}