/*
Modular Exponentation
finding ('X'^'N')%'M'
*/
#include <iostream>
#include <vector>
using namespace std;

int modularExponentiation(int x, int n, int m)
{
    int res = 1;
    while (n > 0)
    {
        if (n & 1) // if odd
        {
            res = (1LL * (res) * (x % m)) % m; // typecasting with long long i.e 1LL*
        }
        x = (1LL * (x) % m * (x) % m) % m;
        n = n >> 1; // divide by 2
    }
    return res;
}

int main()
{
    int ans = modularExponentiation(4, 3, 10);
    cout << ans << endl;
    return 0;
}
