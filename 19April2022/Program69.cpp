#include <iostream>
using namespace std;
int main()
{
    int num, decimal = 0, base = 1, rem;
    cout << "Write a Program to Convert entered Binary Number to Decimal Numbe" << endl
         << "--------------------------------------------------" << endl;
    cout << "Enter the Binary Number : ";
    cin >> num;

    while (num > 0)
    {
        rem = num % 10;
        decimal = decimal + rem * base;
        num = num / 10;
        base = base * 2;
    }

    cout << "Decimal Number : " << decimal;
    return 0;
}
