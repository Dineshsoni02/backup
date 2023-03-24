#include <iostream>
using namespace std;

int fact(int n)
{
    int fa = 1;
    for (int i = 1; i <= n; i++)
    {
        fa = fa * i;
    }
    // cout << fa;
    return fa;
}

int ncr(int n, int r)
{
    if (n < r)
    {
        cout << "n should be larger than r";
        exit(1);
    }
    int num = fact(n);
    int denom = fact(r) * fact(n - r);
    return num / denom;
}

int main()
{
    int n, r;

    cout << "enter n and c:" << endl;
    cin >> n >> r;
    int ans = ncr(n, r);
    cout << "answer is:" << ans;
}
