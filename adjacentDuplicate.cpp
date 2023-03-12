/*
Remove all adjacent duplicates in string
*/
#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        while (i < s.length())
        {
            if (s[i] == s[i + 1])
            {
                s.erase(i, 2);
                i--;
            }
            else
            {
                i++;
            }
        }
    }
    return s;
}

int main()
{
    string str;
    cout << "Enter string :" << endl;
    getline(cin, str);

    cout << removeDuplicates(str);
    return 0;
}
