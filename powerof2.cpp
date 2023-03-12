/*code to return compliment value of a given number
if 5 is entered output will be 2*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;
bool flag = false;
cout<<"Enter value of n: "<<endl;
cin>>n;
for (int i = 0; i <= 30; i++)
{
    int ans = pow(2,i);
    if (ans == n)
    {
        flag=true;        
    }
}
if (flag==true)
    {
        cout<<"Power of 2"<<endl;
        return 0;
    }
    cout<<"Not power of 2"<<endl;
return 0;
}
