#include <iostream>
using namespace std;
int main()
{
    char a;
    cout << "Enter any character : ";
    cin >> a;

    if ((a >= 'a' && a <= 'z'))
    {
        cout << " letter " << a << " is in lowercase ";
    }

    else if ((a >= 'A' && a <= 'Z'))
    {
        cout << " letter " << a << " is in uppercase ";
    }

    else
    {
        cout << "Entered value is not a character ";
    }

    return 0;
}