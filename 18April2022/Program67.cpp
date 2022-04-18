#include <iostream>
using namespace std;
int main()
{
    int i = 9, j = 90, n, sum = 0;
    cout << "Nth Element in series : ";
    cin >> n;

    for (int k = 1; k <= n; k++)
    {
        cout << i;
        if (k < n)
        {
            cout << " + ";
        }
        sum = sum + i;
        i = i + j;
        j = j * 10;
    }
    cout << " = " << sum;

    return 0;
}