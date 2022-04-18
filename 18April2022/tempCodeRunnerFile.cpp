#include <iostream>
using namespace std;
int main()
{
    int i, j, r;
    char a = 'A';
    cout << "Pattern";

    for (i = 0; i < 4; i++)
    {
        for (j = 1; j <= 4 - i; j++)
        {
            cout << a << " ";
            a = a + 2;
        }
        cout << endl;
        a = 'A';
        ++a;
    }
    return 0;
}