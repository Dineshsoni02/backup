#include <iostream>
#include <climits>

using namespace std;

int getMax(int arr[], int size)
{
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}
int getMin(int arr[], int size)
{
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        mini = min(mini, arr[i]);
    }
    return mini;
}

int main()
{
    int size;
    cout << "enter size";
    cin >> size;
    int arr[10];
    cout << "enter elements";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Max:" << getMax(arr, size) << endl;
    cout << "Min:" << getMin(arr, size);
}