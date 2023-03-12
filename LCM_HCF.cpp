/*
Finding LCM and HCF iterative way
*/
#include <iostream>
#include <vector>
using namespace std;

int hcf(int a, int b)
{
    if (a == 0)
        return b;

    if (b == 0)
        return a;

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int main()
{
    int a, b;
    cout << "Enter two Numbers : " << endl;
    cin >> a >> b;
    int ans = hcf(a, b);
    cout << "HCF of " << a << " & " << b << " is : " << ans << endl;
    cout << "LCM is " << (a * b) / ans << endl; // NOTE: lcm=(a*b)/hcf
    return 0;
}
