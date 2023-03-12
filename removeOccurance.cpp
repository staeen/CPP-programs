/*
Remove all occurance o substring
*/
#include <iostream>
#include <string>
using namespace std;

string removeOccurance(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main()
{
    string str, part;
    cout << "Enter string :" << endl;
    getline(cin, str);
    cout << "Enter sub-string part :" << endl;
    getline(cin, part);
    cout << removeOccurance(str, part);
    return 0;
}
