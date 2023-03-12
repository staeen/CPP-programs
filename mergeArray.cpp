/*
Merging two array and sonting them
*/
#include <iostream>
#include <vector>
using namespace std;

void mergeArray(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < n)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < m)
    {
        arr3[k++] = arr2[j++];
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
    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};
    int arr3[8] = {0};
    mergeArray(arr1, 5, arr2, 3, arr3);
    print(arr3, 8);
    return 0;
}
/*

    int arr1[7] = {4, 56, 32, 7, 21, 9, 12};
    int arr2[4] = {43, 11, 8, 26};
    int arr3[11] = {0};
    mergeArray(arr1, 7, arr2, 4, arr3);
    print(arr3, 11);
*/