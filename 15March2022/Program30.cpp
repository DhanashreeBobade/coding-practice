#include <iostream>
using namespace std;

int main()
{
    int i, k = 0;

    for (i = 1; i < 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << " " << k << " ";
        }
        cout << endl;
    }

    return 0;
}