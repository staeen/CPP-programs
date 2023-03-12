/*
Program to split change of an amount in 100,50,20,10,1 
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
int amount=0;
int hundred=0,fifty=0,twenty=0,ten=0,one=0;
cout<<"Enter total amount : "<<endl;
cin>>amount;
int leftover=amount;
switch (1)
{
case 1:
    hundred=amount/100;
    leftover=leftover-(100*hundred);
    cout<<hundred<<" Hundred "<<endl;
    amount=leftover;
case 2:
    fifty=amount/50;
    leftover=leftover-(50*fifty);
    cout<<fifty<<" Fifty "<<endl;
    amount=leftover;
case 3:
    twenty=amount/20;
    leftover=leftover-(20*twenty);
    cout<<twenty<<" Twenty "<<endl;
    amount=leftover;
case 4:
    ten=amount/10;
    leftover=leftover-(10*ten);
    cout<<ten<<" Ten "<<endl;
    amount=leftover;
    cout<<leftover<<" Ones "<<endl;
}
return 0;
}