/*
Maximum occuring character in a string
*/
#include <iostream>
using namespace std;

char getMaxOccuringChar(string s){
    int arr[26]={0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch= s[i];
        int num=0;
        if(ch>='a'&&ch<='z'){
            num =ch-'a';
        }
        else
        {
            num=ch-'A';
        }
        arr[num]++;
    }
    int max=-1,ans=-1;
    for (int i = 0; i < 26; i++)
    {
        if(max<arr[i]){
            ans=i;
            max=arr[i];
        }
    }
    char final='a'+ans;
    return final;

}

int main()
{
    string str;
    cout << "Enter string :" << endl;
    cin >> str;
    cout<<getMaxOccuringChar(str);
    return 0;
}
