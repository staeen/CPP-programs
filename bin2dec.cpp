/*Program to convert binary number to decimal number*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;
cout<<"Enter value of n: "<<endl;
cin>>n;
int i=0;
int answer=0;
while(n!=0){
    int bit=n%10;
    if(bit==1){
    answer=answer+pow(2,i);
    }
    n=n/10;
    i++;
}
cout<<"Decimal equivalence is : "<<answer<<endl;
return 0;
}
