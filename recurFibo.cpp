/*
Recursion
*/
#include <iostream>
using namespace std;

int Fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int ans = Fib(n - 1) + Fib(n - 2);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << Fib(n) << endl;
    return 0;
}
