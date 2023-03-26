/*
Recursion
*/
#include <iostream>
using namespace std;

void reverse(int i, int j, string &str)
{
    if (i > j) // base case
        return;
    swap(str[i], str[j]);
    i++;
    j--;

    reverse(i, j, str);
}

int main()
{
    string name = "stanzen";
    cout << "Before " << name << endl;
    reverse(0, name.length() - 1, name);
    cout << "After " << name << endl;
    return 0;
}
