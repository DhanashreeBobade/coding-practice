#include <iostream>
using namespace std;
int main()
{
    int i, j;
    cout << "Write a Program to that accepts two integers from user and calculates the Quotient & Reminder from their division " << endl;

    cout << "Enter the divisor and divident : ";
    cin >> i >> j;
    int q, r;
    q = i / j;
    r = i % j;

    cout << "Quotient : " << q << endl;
    cout << "Reminder : " << r;

    return 0;
}