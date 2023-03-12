/*

*/
#include <iostream>
using namespace std;

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverseString(char name[],int n)
{
    int s=0;
    int e=n-1;
    while (s<e)
    {
        swap(name[s++],name[e--]);
    }
    cout<<"Reverse is "<<name<<endl;
}

int main()
{
    char name[20];
    cout << "Enter name :" << endl;
    cin >> name;
    int length=getLength(name);
    reverseString(name,length);
    return 0;
}
