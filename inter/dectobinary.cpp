#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n, ans = 0;
    cout << "enter no:";
    cin >> n;
    int i = 0;
    // while (n != 0)
    // {
    //     int bit = n & 1;
    //     ans = (bit * pow(10, i)) + ans;
    //     n = n >> 1;
    //     i++;
    // }
    // binary to dec
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans += pow(2, i);
        }
        n /= 10;
        i++;
    }

    cout << "Answer: " << ans << endl;
}
