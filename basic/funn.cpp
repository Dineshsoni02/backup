#include <iostream>
using namespace std;

bool isEven(int a)
{
    if (a & 1)
    {
        return 0; // odd
    }
    return 1; // even
}

int main()
{
    int amt;
    cin >> amt;

    if (isEven(amt))
    {
        cout << "no. is even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
}
