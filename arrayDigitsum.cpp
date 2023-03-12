/*
Adding two arrays like digits
    1,2,3,4,5
  + 0,0,8,8,5
 ____________
  = 1,3,2,3,0
*/
#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    while (s < e)
    {
        swap(v[s++], v[e--]);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return v;
}

vector<int> arraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    int x = 0;
    int y = 0;
    for (int i = 0; i < n; i++)
    {
        x = x * 10 + a[i]; // making array into digit.
    }
    for (int i = 0; i < m; i++)
    {
        y = y * 10 + b[i]; // making array into digit.
    }
    x = x + y; // adding digit.
    vector<int> v;
    while (x != 0)
    {
        // breaking resultant x digit by digit and adding it to v.
        int d = x % 10;
        v.push_back(d);
        x = x / 10;
    }

    return reverse(v); // reversing the array and printing it.
}

int main()
{
    int m, n;
    vector<int> a;
    vector<int> b;
    cout << "Enter size of 1st array :" << endl;
    cin >> m;
    cout << "Enter size of 2nd array :" << endl;
    cin >> n;
    cout << "Enter "<<m<<" elements of 1st array " << endl;
    for (int i = 0; i < m; i++)
    {
        int item;
        cin >> item;
        a.push_back(item);
    }
    cout << "Enter "<<n<<" elements of 2nd array " << endl;
    for (int i = 0; i < n; i++)
    {
        int item;
        cin >> item;
        b.push_back(item);
    }
    cout << "Sum  :" << endl;
    arraySum(a, m, b, n);
    cout<<endl;
    return 0;
}
