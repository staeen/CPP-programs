/*code to return compliment value of a given number
if 5 is entered output will be 2*/
#include<iostream>
using namespace std;
int main(){
int n,mask;
cout<<"Enter value of n: "<<endl;
cin>>n;
mask=0;
int m=n;
if (n==0)
{
    cout<<"Output is : 1"<<endl;
    return 0;
}
while (m!=0)
{
    mask=(mask << 1) | 1;
    m=m>>1;
}
int ans =(~n)&mask;
cout<<"Output is : "<<ans<<endl;

return 0;
}
