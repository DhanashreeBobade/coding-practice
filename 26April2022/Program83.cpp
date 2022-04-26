#include <iostream>
using namespace std;
int main()
{
    int i, sum = 0, n, m;

    cout << "Write a Program to check whether the entered number is Abundant number or not." << endl;
    cout << "Enter the number : ";
    cin >> n;
    m = n / 2;
    cout<<m;
    for (i = 1; i <= m; i++)
    {
        if (n%i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum > n)
    {
        cout << n << "  is abundant number since ";
        for (i = 1; i <= m; i++)
        {
            if (n%i == 0)
            {
                cout << i;
            }
            if (i<m)
            {
                cout<<" + ";
            }
            
            

        }

        cout << " = " << sum << " which is greater than " << n;
    }

    else
    {
        cout << n << " is not an abundant number as it is smaller than " << sum;
    }
    return 0;
}