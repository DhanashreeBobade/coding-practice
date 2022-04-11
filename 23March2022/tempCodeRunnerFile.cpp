#include <iostream>
using namespace std;

int main()
{
    int a = 1, c;
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            c = a * a * a;
            cout << " " << c << " ";
            ++a;
        }

        cout << endl;
    }
    return 0;
}