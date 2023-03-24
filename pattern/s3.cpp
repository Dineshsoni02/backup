#include <iostream>
using namespace std;

int main()
{
    int n = 4, i, j;
    cout << "Pattern..........\n";
    int count = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << count << "\t";
            count++;
        }
        cout << endl;
    }
}