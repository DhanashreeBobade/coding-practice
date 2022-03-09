#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the year to check whether it is a leap year or not : ";
    cin >> a;

    if (a % 4 == 0)
    {
        cout << a << " is a leap year ";
    }

    else
    {
        cout << a << " is not a leap year";
    }

    return 0;
}