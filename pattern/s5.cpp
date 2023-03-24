#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    // A A A
    // B B B
    // C C C
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << char('A' + i - 1) << " ";
    //     }
    //     cout << endl;
    // }
    // ABC*3
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << char('A' + j - 1) << " ";
    //     }
    //     cout << endl;
    // }
    // abc def ghi
    char start = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(start + i + j - 2) << " ";
            // start++;
        }
        cout << endl;
    }
    return 0;
}