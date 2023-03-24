#include <iostream>
using namespace std;

int main()
{
    int n, i = 2;
    cout << "enter a no. :";
    cin >> n;

    // while (i < n)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << "not prime for" << i << endl;
    //     }
    //     else
    //     {
    //         cout << "prime for " << i << endl;
    //     }
    //     i++;
    // }
    bool isPrime = 1;
    for (i; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << "Not prime:::";
    }
    else
    {
        cout << "prime";
    }
}