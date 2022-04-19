#include <iostream>
using namespace std;
int main()
{
    int n, m, i, j, k;
    cout << "Write a Program to that prints series of Prime number ranging between 1 to 100." << endl;
    n = 100;
    j = 0;
    cout << "1 2 ";
    for (k = 3; k <= n; k++)
    {
        m = k / 2;
        j = 0;

        for (i = 2; i <= m; i++)
        {
            if (k % i == 0)
            {
                ++j;
            }
        }

        if (j == 0)
        {
            cout << k <<" ";
        }
    }
    return 0;
}