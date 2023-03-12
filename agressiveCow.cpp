/*
Aggressive cow Problem
*/
#include <iostream>
#include <math.h>
#include <limits.h>
#include <algorithm>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid)
{
    int cowCount = 1;
    int lastPos = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}

int aggressiveCow(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int s = 0;
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(arr, n, k, mid))
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
int main()
{
    int n = 5;                      // no of stalls
    int k = 2;                      // no of cows
    int arr[100] = {4, 2, 1, 3, 6}; // pages in book
    cout << aggressiveCow(arr, n, k);
    return 0;
}