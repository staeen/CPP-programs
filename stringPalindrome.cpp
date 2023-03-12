/*
Checking if string is palindrome or not
*/
#include <iostream>
using namespace std;

char toLowercase(char ch) // converting uppercase to lowercase
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    return false;
}

bool checkPalindrime(string a)
{
    int s = 0;
    int e = a.length() - 1;
    while (s < e)
    {
        if (a[s] != a[e])
        {
            return 0;
        }
        else
        {
            e--;
            s++;
        }
    }
    return 1;
}

bool isPalindrome(string s)
{
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (valid(s[i]))
        {
            temp.push_back(s[i]);
        }
    }
    for (int i = 0; i < temp.length(); i++)
    {
        temp[i] = toLowercase(temp[i]);
    }
    return checkPalindrime(temp);
}

int main()
{
    string str;
    cout << "Enter string :" << endl;
    cin >> str;
    cout << "Palindrome or not : " << isPalindrome(str) << endl;
    return 0;
}
