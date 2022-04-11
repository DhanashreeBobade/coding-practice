#include <iostream>
using namespace std;
int main()
{
    int i, j, f = 1;
    cout << "Enter the range : ";
    cin >> i;
    cout << " to ";
    cin >> j;

    while (i <= j)
    {
        for (int a = 1; a <= i; a++)
        {
            f = f * a;
        }
        cout << "Factorial of " << i << " is " << f << endl;
        f = 1;
        ++i;
    }

    return 0;
}