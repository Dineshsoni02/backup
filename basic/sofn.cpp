#include <iostream>
using namespace std;

int main()
{
    int main, sum = 0;
    cout << "enter a no:";
    cin >> main;
    int i = 0;
    while (i <= main)
    {
        sum += i;
        i++;
    }

    cout << "sum:" << sum;
    return 0;
}