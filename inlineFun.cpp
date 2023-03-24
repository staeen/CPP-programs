/*
Inline Function
*/
#include <iostream>
using namespace std;

inline int getMax(int &a, int &b)
{
    return (a > b) ? a : b; // ifelse statement
}

int main()
{
    int a = 7;
    int b = 5;
    int ans = 0;
    ans = getMax(a, b);
    cout << ans << endl;
    a += 2;
    b += 3;
    ans = getMax(a, b);
    cout << ans << endl;

    return 0;
}
