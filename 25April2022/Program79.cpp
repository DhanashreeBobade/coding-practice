#include <iostream>
using namespace std;
int main()
{
    int i, count = 0, n, temp, a[500], j;
    cout << "Write a Program to Convert entered Decimal Number to Binary Number" << endl;
    cout << "Enter a positive decimal number : ";
    cin >> n;
    temp = n;

    if (n < 4)
    {
        if (n = 0)
        {
            cout << "000";
        }

        else if (n = 1)
            {
                cout << "001";
            }

        else if (n = 2)
            {
                cout << "010";
            }

        else
        {
            cout << "011";
        }
    }

    else
    {
        while (n != 0)
        {
            n = n / 2;
            ++count;
        }
        // cout << count << endl;
        n = temp;

        for (i = 0; i < count; i++)
        {
            j = n % 2;
            n = n / 2;
            a[i] = j;
        }

        for (i = 0; i < count; i++)
        {
            cout << a[count - i - 1];
        }
    }
    return 0;
}