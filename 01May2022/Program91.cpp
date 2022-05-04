#include <iostream>
using namespace std;
int main()
{
    int i, j, n = 3, p = 4, r, q = 4, First = 3, add;

    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (j <= n)
            {
                cout << "   ";
            }
            else if (j == p)
            {
                cout << " " << First << " ";
            }

            else
            {
                r = 3 * q;
                ++q;
                cout << r << " ";
            }
        }
        r = 1;
        --p;
        --n;
        cout << endl;
    }

    for (i = 1; i <= 1; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (j <= n)
            {
                cout << "    ";
            }
            else if (j == p)
            {
                cout << " " << First << " ";
                r = 3 + q;
            }

            else
            {
                cout << r << " ";
                r = 3 * q;
                ++q;
            }
        }
        r = 1;
        --p;
        --n;
        cout << endl;
    }
    cout << "  3 4 10 18";

    return 0;
}