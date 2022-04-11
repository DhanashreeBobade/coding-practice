#include <iostream>
using namespace std;

int main()
{
    int space, rows, i = 1, j;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows ; i++)
    {
        for (space = 1; space <= rows - i; space++)
        {
            cout << "  ";
        }

        for (j = 0; j < i; j++)
        {
            cout << "* "
                 << "  ";
        }

        cout << endl;
    }
    return 0;
}
