#include <iostream>
using namespace std;
int main()
{
    int i, j, m, n;
    cout << "Write a Program that checks whether the entered number is a Prime Number or not." << endl;
    cout << "Enter a number :";
    cin >> n;
    m = n / 2;
    j = 0;

    for (i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            ++j;
        }
    }

    if (j == 0)
    {
        cout << n << " is a Prime Number";
    }

    else
    {
        cout << n << " is not a Prime Number";
    }

    return 0;
}