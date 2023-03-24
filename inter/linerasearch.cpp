#include <iostream>
using namespace std;

bool searchArr(int arr[], int t, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == t)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[8] = {1, 5, -5, 8, 7, 9, 6, -2};
    int t;
    cout << "\n enter target value to search:";
    cin >> t;
    bool found = searchArr(arr, t, 8);
    if (found)
    {
        cout << "target present";
    }
    else
    {
        cout << "target missing";
    }
}