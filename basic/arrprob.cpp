#include <iostream>
using namespace std;

int updArray(int arr[])
{

    arr[1] = {45};
    cout << "\n inside update array func";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[3] = {1, 5, 6};
    updArray(arr);

    cout << "\n inside main";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
}
