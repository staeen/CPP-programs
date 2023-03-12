/*
Program to find triplet sum of three element which makes 12
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
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 12)
                {
                    cout << arr[i] << " + " << arr[j] << " + " << arr[k] << " = 12 ";
                    cout << endl;
                }
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