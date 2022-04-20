#include <iostream>
using namespace std;
int main()
{
    int i, j, n = 2;
    char a = 'a';
    cout << "Pattern" << endl;

    for (i = 0; i < 4; i++)
    {
        for (j = 1; j <= 4 - i; j++)
        {
            cout << a << " ";
            ++a;
        }
        cout << endl;

        a = 'a';
        a = a + n;
        n=n+2;
    }
    return 0;
}