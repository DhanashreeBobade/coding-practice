#include <iostream>
using namespace std;
int main()
{
    int num, decimal = 0, base = 1, rem, temp, i, a[500], count = 0;
    cout << "Write a Program to Convert entered Binary Number to Octal Numbe" << endl
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
    // cout<<"Decimal Number : "<<decimal;

    temp = decimal;

    while (decimal != 0)
    {
        decimal = decimal / 8;
        ++count;
    }
    // cout << count << endl;
    decimal = temp;

    for (i = 0; i < count; i++)
    {
        a[i] = decimal % 8;
        decimal = decimal / 8;
    }
    cout << "Octal Number :";
    
    for (i = 0; i < count; i++)
    {
        cout << a[count - i - 1];
    }

    return 0;
}
