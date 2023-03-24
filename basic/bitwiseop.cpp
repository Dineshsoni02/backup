#include <iostream>
using namespace std;

int main()
{
    int a = 2, b = 4;

    cout << "and op &:"
         << (a & b) << endl;
    cout << "or op |:"
         << (a | b) << endl;
    cout << "xor op ^:"
         << (a ^ b) << endl;
    cout << "not op single~:"
         << ~b << endl;
}
