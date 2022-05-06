#include <iostream>
using namespace std;
int main()
{
    int val, i, temp;
    cout << "Write a Program to that accepts an integer value from user and prints all even numbers from that number to 0 using while loop." << endl
         << "---------------------------------------------------------------------------------------------" << endl;
    cout << "Enter the number : ";
    cin >> val;
    temp = val;

    for (i = 0; i < temp; i++)
    {
        if (val % 2 == 0)
        {
            cout << val << " ";
        }
        --val;
    }
    return 0;
}