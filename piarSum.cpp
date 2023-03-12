/*
Program to find pair sum of two element which makes 5
input = [1 2 3 4 5]
output = [1 4
          2 3]
*/
#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

void arrPair(int arr[], int n)
{
    cout << "Output Pair sum :" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == 5)
            {
                cout << arr[i] << " + " << arr[j] << " = 5 ";
                cout << endl;
            }
        }
    }
}
int main()
{
    int size;
    cout << "Enter size of array less than 100" << endl;
    cin >> size;
    int arr[100];
    cout << "Enter " << size << " values of array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    arrPair(arr, size);
    return 0;
}