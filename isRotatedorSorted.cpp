/*
Check if array is sorted or rotated
*/
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

bool check(vector<int> &arr)
{
    int count = 0;
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            count++;
        }
    }
    if (arr[n - 1] > arr[0])
        count++;

    return count <= 1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << check(arr); // 1 is true 0 is false
    return 0;
}
