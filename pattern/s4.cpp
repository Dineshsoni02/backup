#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    // 1st way
    //  for (int i = 1; i <= n; i++)
    //  {
    //      int val = i;
    //      for (int j = 1; j <= i; j++)
    //      {
    //          cout << val << "  ";
    //          val--;
    //      }
    //      cout << endl;
    //  }
    // 2nd way
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i - j + 1 << "  ";
        }
        cout << endl;
    }
}