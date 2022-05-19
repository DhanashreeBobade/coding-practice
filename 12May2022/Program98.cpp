#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int i, n, len, base = 1, dec, temp, j = 0, sum = 0;
    char num[100];

    cout << "Write a Program to Convert entered Hexadecimal Number to Decimal Number." << endl
         << "----------------------------------------------------------------------" << endl;
    cout << "Enter the number : ";
    cin >> num;
   // cout << strlen(num);
    n = strlen(num);
    len = n;
    for (i = n - 1; i >= 0; i--)
    {
        if (num[i] >= '0' && num[i] <= '9')
        {
            sum = sum + (num[i] - 48) * base;
            base = base * 16;
            //cout << sum << endl;
        }

        else if (num[i] >= 'A' && num[i] <= 'F')
        {
            sum = sum + (num[i] - 55) * base;
            base = base * 16;
            //cout << sum << endl;
        }
    }
    cout << sum;
    return 0;
}