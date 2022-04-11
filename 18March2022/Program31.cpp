#include <iostream>
using namespace std;

int main()
{
    int s, n = 1;

    for (int j = 0; j < 10; j++)
    {
        s = n * n;
        cout << "Square of " << n << " : " << s << endl;
        s = 0;
        ++n;
    }
    return 0;
}