/*
Pinting intersection of two arrays
*/
#include <vector>
#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

void arrIntersect(int arrm[], int m, int arrn[], int n)
{
    cout << "Intersection of array M and N is :";
    for (int i = 0; i < m; i++)
    {
        int element = arrm[i];
        for (int j = 0; j < n; j++)
        {
            if (element == arrn[j])
            {
                cout << arrn[j] << " ";
                arrn[j] = INT_MIN;
                break;
            }
        }
    }
    cout << endl;
}

int main()
{
    int sizeM, sizeN;
    cout << "Enter size of an array M and N less than 100" << endl;
    cin >> sizeM >> sizeN;
    int arrM[100], arrN[100];
    cout << "Enter " << sizeM << " values of array : " << endl;
    for (int i = 0; i < sizeM; i++)
    {
        cin >> arrM[i];
    }
    cout << "Enter " << sizeN << " values of array : " << endl;
    for (int i = 0; i < sizeN; i++)
    {
        cin >> arrN[i];
    }
    arrIntersect(arrM, sizeM, arrN, sizeN);
    return 0;
}