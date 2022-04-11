#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter three numbers :" << endl;
    cout << "a : ";
    cin >> a;
    cout << "b : ";
    cin >> b;
    cout << "c : ";
    cin >> c;

    if ((a < b) && (a < c))
    {
        cout << "The Minimum number among " << a << " , " << b << " , " << c << " is : " << a;
    }

    else if ((b < a) && (b < c))
    {
        cout << "The Minimum number among " << a << " , " << b << " , " << c << " is : " << b;
    }

    else
    {
        cout << "The Minimum number among " << a << " , " << b << " , " << c << " is : " << c;
    }
    return 0;
}