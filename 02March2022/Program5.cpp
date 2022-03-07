#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Enter the number : ";
    cin >> i;

    if (i % 5 == 0 && i % 11 == 0)
    {
        cout << i << " is divisible by 5 & 11 ";
    }

    else
    {
        cout << i << " is not divisible by 5 & 11 ";
    }

    return 0;
}