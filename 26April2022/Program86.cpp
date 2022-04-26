#include <iostream>
using namespace std;
int main()
{
    int i, j, n, k = 1;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            n = 4 - i;
            if (j < n)
            {
                cout << "  ";
            }

            else if (j == n)
            {
                cout << " = ";
            }

            else
            {
                cout << k << " ";
                ++k;
            }

            
        }
        k = 1;
        --n;
        cout << endl;
    }

    return 0;
}