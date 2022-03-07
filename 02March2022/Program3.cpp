#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Enter the number : ";
    cin >> i;
    cout << endl;

    if (i%2 != 0)
    {
        cout << i << " is an odd number " << endl;
    }

    else
    {
        cout << i << " is an even number ";
    }
    return 0;
}