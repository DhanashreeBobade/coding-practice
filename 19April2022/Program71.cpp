#include <iostream>
using namespace std;
int main()
{
    int i, j, n = 1, a=7;

    cout << "Pattern" << endl;

    for (i = 0; i < 4; i++)
    {
        for (j = 1; j <= 4 - i; j++)
        {
            cout << a << " ";
            ++n;
            a = 7 * n;
        }
        cout << endl;
    }
    return 0;
}