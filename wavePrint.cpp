/*
Printing matrix in wave form
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRow, int mCol)
{
    vector<int> ans;
    for (int i = 0; i < nRow; i++)
    {
        if (i & 1)
        {
            for (int j = mCol - 1; j >= 0; j--)
            {
                ans.push_back(arr[j][i]);
            }
        }
        else
        {
            for (int j = 0; j < mCol; j++)
            {
                ans.push_back(arr[j][i]);
            }
        }
    }
    cout << "After wave" << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return ans;
}

int main()
{
    vector<vector<int>> mat = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    cout << "Before wave" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    wavePrint(mat, 4, 4);

    return 0;
}
