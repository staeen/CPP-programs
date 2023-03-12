/*
Square root using binary search with 3 decimal point precision
*/
#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

long long int sqrtInteger(int n)
{
    int s = 0, e = n;
    long long int ans = -1;
    long long int mid = s + (e - s) / 2;
    while (s <= e)
    {
        long long int square = mid * mid;

        if (square == n)
        {
            return mid;
        }
        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecise(int n, int precision, int tempSol)
{
    double fact = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        fact = fact / 10;

        for (double j = ans; j * j < n; j=j + fact)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter a number :" << endl;
    cin >> n;

    int tempSol = sqrtInteger(n);
    cout << "Root is: " << morePrecise(n, 3, tempSol) << endl;
    return 0;
}