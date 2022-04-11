#include <iostream>
using namespace std;

int main()
{
    int i, j;
    cout << "Enter the first number : " << endl;
    cin >> i;
    cout << "Enter the second number : " << endl;
    cin >> j;

    if (i < j)
    {
        cout << j << " is the maximum among " << i << " and " << j;
    }
    else if (i == j)
    {
        cout << i << " and " << j << "are equal";
    }

    else
    {
        cout << i << " is the maximum among " << i << " and " << j;
    }

    return 0;
}