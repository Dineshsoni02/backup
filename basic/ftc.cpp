#include <iostream>
using namespace std;

int main()
{
    int f = 0, c = 0, i = 0;

    cout << "Enter start range: ";
    cin >> i;
    cout << "Enter end range :";
    cin >> f;

    while (i <= f)
    {
        c = (i - 32) * 5 / 9;
        i++;
        cout << "F. " << i << " is equals to:" << c << " in cel." << endl;
    }
    return 0;
}