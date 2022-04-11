#include <iostream>
using namespace std;
int main()
{
    int i, num;
    cout << "Write a Program to that prints the series which increases with the number entered by user." << endl;

    cout << "Enter the Number: ";
    cin >> num;
    i = 1;
    cout << i;

    for (int i = 1; i <= 100; i++)
    {
        i = i + num;

        if (i < 100)
        {
            cout << " " << i;
            --i;
        }
    }

    return 0;
}