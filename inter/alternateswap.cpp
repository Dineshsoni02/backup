#include <iostream>
using namespace std;

int printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int sortArray(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{

    int oddarr[5] = {10, 2, 5, 4, 8};
    int evenarr[6] = {4, 5, -5, 4, -8, 2};

    printArray(oddarr, 5);
    sortArray(oddarr, 5);
    printArray(oddarr, 5);
    cout << "even array" << endl;
    printArray(evenarr, 6);
    sortArray(evenarr, 6);
    printArray(evenarr, 6);
}