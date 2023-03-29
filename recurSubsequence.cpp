/*
Recursion
Subsequence
*/
#include <iostream>
#include <vector>
using namespace std;

void solve(string str, string output, int index, vector<string> &ans)
{
    if (index >= str.length())
    {
        if (output.length() > 0)
        {
            ans.push_back(output);
        }
        return;
    }
    solve(str, output, index + 1, ans);
    char element = str[index];
    output.push_back(element);
    solve(str, output, index + 1, ans);
}
vector<string> powerSubset(string str)
{
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, output, index, ans);
    return ans;
}

int main()
{
    string name = "ab";
    vector<string> res = powerSubset(name);
    for (int i = 0; i < res.size(); i++)
    {
        cout << "[";
        cout << res[i];
        cout << "] ";
    }
    cout << endl;
    return 0;
}
