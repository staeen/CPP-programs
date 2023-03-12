/*
Move zeroes to the end
*/
#include <iostream>
#include <vector>
using namespace std;

void moveZero(int arr[], int n)
{
    int nonZero = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)

        {
            int temp = arr[nonZero];
            arr[nonZero] = arr[j];
            arr[j] = temp;
            nonZero++;
        }
    }
}
void print(int ans[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    int arr[9] = {4, 0, 56, 0, 32, 7, 0, 9, 12};

    moveZero(arr, 9);
    print(arr, 9);
    return 0;
}
