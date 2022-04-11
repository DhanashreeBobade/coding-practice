#include <iostream>
using namespace std;

int main()
{
    int t, n = 2;

    for (int j = 1; j <= 10; j++)
    {
        t = j * n;
        cout << n << " X " << j << " = " << t << endl;
    }
    return 0;
}