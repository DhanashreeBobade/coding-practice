#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int n = 4;
    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= (n - i); j++)
        {
            if (j % 2 == 0)
            {
                cout << " = ";
            }
            else
            {
                cout << " + ";
            }
        }
        cout << endl;
    }
    return 0;
}