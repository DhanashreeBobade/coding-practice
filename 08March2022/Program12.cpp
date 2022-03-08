#include <iostream>
using namespace std;
int main()
{

    int i;
    cout << "Enter any number from 0-6: ";
    cin >> i;

    switch (i)
    {
    case 0:
        cout << "Monday";
        break;

    case 1:
        cout << "Tuesday";
        break;

    case 2:
        cout << "Wednesday";
        break;

    case 3:
        cout << "Thrusday";
        break;

    case 4:
        cout << "Friday";
        break;

    case 5:
        cout << "Saturday";
        break;

    case 6:
        cout << "Sunday";
        break;

    default:
        break;
    }

    return 0;
}