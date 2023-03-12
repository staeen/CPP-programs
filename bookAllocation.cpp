/*
Book allocation problem
allocate page of books to student such that you get minimum of the maximum pages per student
*/
#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    int stucount = 1;
    int pagesum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            stucount++;
            if (stucount > m || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int allocateBook(int arr[], int n, int m)
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum;
    int answer = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isPossible(arr, n, m, mid))
        {
            answer = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return answer;
}

int main()
{
    int n = 4;                       // no of books
    int m = 2;                       // no of students
    int arr[100] = {10, 20, 30, 40}; // pages in book
    cout << allocateBook(arr, n, m);
    return 0;
}