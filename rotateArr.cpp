/*
Rotate array
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

void rotateArray(vector<int>& arr, int k) // k==rotation point
{
    vector<int> temp(arr.size());
    for (int i = 0; i < arr.size(); i++)
    {
        temp[(i + k) % arr.size()] = arr[i]; // n%n=0 index,(n-1)%n=1 index
    }
    arr = temp;
    print(arr); // print function call
}

int main()
{
    vector<int> arr = {4, 56, 32, 7, 9, 12};
    cout<<"before rotation"<<endl;
    print(arr);
    cout<<endl<<"after rotation"<<endl;
    rotateArray(arr, 2);
    return 0;
}
