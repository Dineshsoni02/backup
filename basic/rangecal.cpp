#include <iostream>
using namespace std;

int main()
{
    char n;
    cout << "enter input:";
    cin >> n;
    if (n >= 65 && n <= 90)
    {
        cout << "input is a Capital character!";
    }
    else if (n >= 97 && n <= 122)
    {
        cout << "input is a small character!";
    }
    else if (n >= 48 && n <= 57)
    {
        cout << "input is a number!";
    }
    else
    {
        cout << "input is special character!";
    }
    return 0;
}
