/*
Permutation in string
checking if permutation of string s1 is present in string s2 
*/
#include <iostream>
#include <string>
using namespace std;

bool checkEqual(int a[26], int b[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}

bool checkInclusion(string s1, string s2)
{
    int count1[26] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }
    int count2[26] = {0};
    int i = 0;
    int windowSize = s1.length();
    while (i < windowSize && i < s2.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    if (checkEqual(count1, count2))
        return 1;

    while (i < s2.length())
    {
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;
        char oldChar = s2[i - windowSize];
        index = oldChar - 'a';
        count2[index]--;
        i++;
        if (checkEqual(count1, count2))
            return 1;
    }
    return 0;
}

int main()
{
    string str1, str2;
    cout << "Enter string 1 :" << endl;
    getline(cin, str1);
    cout << "Enter string 2 :" << endl;
    getline(cin, str2);
    cout << checkInclusion(str1, str2);
    return 0;
}
