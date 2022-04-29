#include <iostream>
using namespace std;
int main()
{
    int i, count = 0, n, temp, a[500], j;
    cout << "Write a Program to Convert entered Decimal Number to Octal Number" << endl;
    cout << "Enter a positive decimal number : ";
    cin >> n;
    temp = n;

        while (n != 0)
        {
            n = n / 8;
            ++count;
        }
        // cout << count << endl;
        n = temp;

        for (i = 0; i < count; i++)
        {
            j = n % 8;
            n = n / 8;
            a[i] = j;
        }

        for (i = 0; i < count; i++)
        {
            cout << a[count - i - 1];
        }
   
    return 0;
}