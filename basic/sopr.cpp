#include <iostream>
using namespace std;

int main()
{
    int sum = 0, i, n;
    cout << "enter no=";
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
            cout << i << ",";
        }
    }
    cout << "sum" << sum;
}