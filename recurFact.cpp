/*
Recursion
Factorial using recursion
*/
#include <iostream>
using namespace std;

int fact(int n)
{
    // base case
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    int n;
    cout << "Enter n " << endl;
    cin >> n;
    int ans = fact(n);
    cout << "Fatorial is " << ans << endl;
    return 0;
}
