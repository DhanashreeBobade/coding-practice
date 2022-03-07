#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Enter the number : " << endl;
    cin >> i;

    if (i < 0)
    {
        cout << i << " is a negative number " << endl;
    }
    else
    {
        cout << i << " is a positive number";
    }

    return 0;
}