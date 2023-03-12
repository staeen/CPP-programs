/*Reversing a number with a constraint that the number should be in a certain length*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;
cout<<"Enter value of n: "<<endl;
cin>>n;
int answer=0;
while(n!=0){
    int digit=n%10;
    if((answer>INT32_MAX/10)||(answer<INT32_MIN/10)){
        cout<<"Error : Out of Range"<<endl;
        return 0;
    }
    answer=(answer*10)+digit;
    n=n/10;
}
cout<<"Reverse of n : "<<answer<<endl;
return 0;
}
