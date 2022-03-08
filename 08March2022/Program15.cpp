#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "Enter the 3 angles of the triangle : ";
    cin >> x >> y >> z ;
    int sum = x + y + z;
    if (sum == 180)
    {
        cout << "The triangle with angles " << x << " " << y << " & " << z << " is valid one";
    }

    else
    {
        cout << "The triangle with angles " << x << " " << y << " & " << z << " is not a valid one";
    }

    return 0;
}