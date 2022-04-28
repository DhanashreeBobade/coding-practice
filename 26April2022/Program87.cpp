#include <iostream>
using namespace std;
int main()
{
    int i, a[100], b[100], n;
    cout << " Write a Program that takes an array as input from user and prints the array in reverse order." << endl;
    cout << "Enter the count of the number : ";
    cin >> n;
    cout << "Enter the numbers : ";
    for (i = 0; i < n; i++)
    {
            cin >> a[i];
    }

    for (i = 0; i < n; i++)
    {
        b[i] = a[n - 1 - i];
        cout << " " << b[i];
    }

    return 0;
}