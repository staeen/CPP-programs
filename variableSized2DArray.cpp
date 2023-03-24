/*
Variable sized 2D array
*/
#include <iostream>
using namespace std;

int main()
{
    int row;
    cin >> row;
    int col;
    cin >> col;

    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << "Printing : " << endl;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < row; i++)
    {
        // mem release
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
