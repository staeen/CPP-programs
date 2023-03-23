/*
Pointers Exercise
*/
#include <iostream>
using namespace std;

void update1(int n){
    n++;
}
void update2(int &n){
    n++;
}

int &fun(int a){    //bad practise
    int num=a;
    int &ans=num;
    return ans;    
}

int main()
{
    int n=5;
    cout<<"Before "<<n<<endl;
    update2(n);
    cout<<"After "<<n<<endl;
    cout<<"Fun output "<<fun(n)<<endl;
    return 0;
}
