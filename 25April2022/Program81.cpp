#include <iostream>
using namespace std;

int main()
{
    int space, rows, i = 1, j;
    char a = 'A';

    cout << "Pattern" << endl;

    for (int i = 1; i <= 4; i++)
    {
        for (space = 1; space <= 4 - i; space++)
        {
            cout << " ";
        }

        for (j = 0; j < i; j++)
        {
            cout << a;
            cout<< " ";
            ++a;
        }
        a = 'A';

        cout << endl;
    }
    return 0;
}
