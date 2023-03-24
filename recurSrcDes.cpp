/*
Recursion
*/
#include <iostream>
using namespace std;

void reachHome(int src, int des)
{
    cout << "Source " << src << " destination " << des << endl;
    // base case
    if (src == des)
    {
        cout << "Reached " << endl;
        return;
    } // processing
    // recursive call
    reachHome(src + 1, des);
}

int main()
{
    int des = 10;
    int src = 1;
    reachHome(src, des);

    return 0;
}
