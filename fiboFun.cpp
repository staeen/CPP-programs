/*
function to print fibonacci sequence
*/
#include<iostream>
#include<math.h>
using namespace std;

int fibo(int n){
    int a = 0,b = 1,c = 0;
    cout<<a<<" ";
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout<<c<<" ";
    }
    cout<<endl;
    return c;
}

int main(){
    int n;
        cout<<"Enter n : "<<endl;
        cin>>n;
        int num = fibo(n);
        cout<<n<<" element of fibonacci sequence is "<<num<<endl;
    return 0;
}