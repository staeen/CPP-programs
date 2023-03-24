/*
Recursion
*/
#include <iostream>
using namespace std;

int countDistinctWay(long long nstairs)
{
    // base case
    if (nstairs < 0)
        return 0;
    if (nstairs == 0)
        return 1;
    //recursive call
    int ans = countDistinctWay(nstairs-1)+countDistinctWay(nstairs-2);
    return ans;
}

int main()
{
    long long n;
    cin >> n;
    cout << countDistinctWay(n) << endl;
    return 0;
}
