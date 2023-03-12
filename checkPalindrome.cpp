/*
Checking if string is palindrome or not
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

char toLowercase(char ch) // converting uppercase to lowercase
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool palindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        if (toLowercase(name[s]) != toLowercase(name[e]))
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}

int main()
{
    char name[20];
    cout << "Enter name :" << endl;
    cin >> name;
    int length = getLength(name);
    cout << "Palindrome or not : " << palindrome(name, length)<<endl;
    return 0;
}
