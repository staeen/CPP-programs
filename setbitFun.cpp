/*
Set bit calculation function
*/
#include<iostream>
#include<math.h>
using namespace std;

int setbit(int n){
    int count = 0;
    while (n)
    {  
    if(n&1==1){
        count++; 
    }
    n=n>>1;
    }
    return count;
}

int main(){
    int a,b;
        cout<<"Enter values of a and b : "<<endl;
        cin>>a>>b;
        int count_a = setbit(a);
        int count_b = setbit(b);
        cout<<" Sum of Setbits of "<<a<<" and "<<b<<" is "<<count_a+count_b<<endl;
    return 0;
}