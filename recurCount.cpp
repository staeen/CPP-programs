/*
Recursion
Counting using recursion
*/
#include <iostream>
using namespace std;

void count(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    count(n - 1);
    cout << n << endl;
}

int main()
{
    int n;
    cout << "Enter n " << endl;
    cin >> n;
    cout << "Count upto " << n << endl;
    count(n);
    return 0;
}
