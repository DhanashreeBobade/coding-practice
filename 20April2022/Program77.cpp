#include <iostream>
using namespace std;
int main()
{
    int i, j, n = 3;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (j <= n)
            {
                cout << "  ";
            }
            else
            {
                cout << j << " ";
            }
        }
        --n;
        cout << endl;
    }

    return 0;
}