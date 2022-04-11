#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0;

    cout << "To find whether the number is Perfect Number or not" << endl;
    cout << "Enter the number : ";
    cin >> n;

    for (i = 1; i < n; i++)
    {
        if (n%i == 0)
        {
            cout << i << endl;
            sum = sum + i;
        }
    }

    if (sum == n)
    {
        cout << n << " is a Perfect Number";
    }

    else
    {
        cout << n << " is Not a Perfect Number ";
    }
    return 0;
}