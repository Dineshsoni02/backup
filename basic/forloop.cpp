#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, a = 0, b = 1;
    cout << "enter range:";
    cin >> n;
    cout << a << " " << b << " ";
    for (int i = 0; i < n; i++)
    {
        sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
}
