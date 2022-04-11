#include <iostream>
using namespace std;
int main()
{
    int r1, r2, i1, i2, r, i;
    cout << "Write a Program that calculates addition of two complex numbers." << endl;
    cout << "Enter Number 1 :" << endl;
    cout << "Real Part : ";
    cin >> r1;
    cout << " Imaginary Part : ";
    cin >> i1;

    cout << "Enter Number 2 :" << endl;
    cout << "Real Part : ";
    cin >> r2;
    cout << " Imaginary Part : ";
    cin >> i2;

    r = r1 + r2;
    i = i1 + i2;

    cout << "The Addition of " << r1 << "+" << i1 << "i"
         << " & " << r2 << "+" << i2 << "i"
         << " is " << r << "+" << i << "i";

    return 0;
}