/*
Pinting intersection of two sorted arrays
*/
#include <vector>
#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

void arrIntersect(int arrm[], int m, int arrn[], int n)
{
    int i=0,j=0;
    cout << "Intersection of array M and N is :";
    while (i<m && j<n)
    {
        if (arrm[i]==arrn[j])
        {
            cout<<arrm[i]<<" ";
            i++;
            j++;
        }
        else if (arrm[i] < arrn[j])
        {
            i++;
        }
        else
        {
            j++;
        }
        
        
    }
    cout<<endl;
}

int main()
{
    int sizeM, sizeN;
    cout << "Enter size of an array M and N less than 100" << endl;
    cin >> sizeM >> sizeN;
    int arrM[100], arrN[100];
    cout << "Enter " << sizeM << " values of array in ascending order : " << endl;
    for (int i = 0; i < sizeM; i++)
    {
        cin >> arrM[i];
    }
    cout << "Enter " << sizeN << " values of array in ascending order : " << endl;
    for (int i = 0; i < sizeN; i++)
    {
        cin >> arrN[i];
    }
    arrIntersect(arrM, sizeM, arrN, sizeN);
    return 0;
}