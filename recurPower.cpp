/*
Recursion
Factorial using recursion
*/
#include <iostream>
using namespace std;

int power(int n)
{
    // base case
    if (n == 0)
        return 1;
    return 2 * power(n - 1);
}

int main()
{
    int n;
    cout << "Enter n " << endl;
    cin >> n;
    int ans = power(n);
    cout << "Power is " << ans << endl;
    return 0;
}
