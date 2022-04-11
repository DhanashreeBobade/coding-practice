#include <iostream>
using namespace std;

int main()
{
    int c, n = 1;

    for (int j = 0; j < 20; j++)
    {
        c = n * n * n;
        cout << "Cube of " << n << " : " << c << endl;
        c = 0;
        ++n;
    }
    return 0;
}