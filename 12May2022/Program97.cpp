#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0, n, i, temp, fac = 1;
    cout << " Write a Program to check whether the entered number is Strong Number or Not." << endl
         << "-------------------------------------------------------------------------------------------------------" << endl;
    cout << "Enter the number : ";
    cin >> num;
    temp = num;
    while (num != 0)
    {

        n = num % 10;
        num = num / 10;

        // cout << n << endl;
        // cout << num;

        for (i = 1; i <= n; i++)
        {
            fac = fac * i;
           // cout << fac << endl;
        }
        sum = sum + fac;
        // cout<<sum<<endl;
        fac = 1;
    }
    if (sum == temp)
    {
        cout << temp << " is a strong number";
    }

    else
    {
        cout << temp << " is not a strong number ";
    }

    return 0;
}