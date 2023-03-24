#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;
    cout << "enter n \n";
    cin >> n;

        for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}