#include <iostream>
using namespace std;
int main()
{
    int num, n, temp, sum = 0, even = 0, odd = 0;
    cout << " Write a Program to that accepts an integer value from user and prints the sum of all digits from that number." << endl
         << "-----------------------------------------------------------------" << endl;
    cout << "Enter the number : ";
    cin >> num;
    temp = num;
    while (num != 0)
    {
        n = num % 10;
        num = num / 10;
        if (n % 2 == 0)
        {
            ++even;
        }

        else
        {
            ++odd;
        }
    }

    cout << temp << " contains " << odd << " Odd Digits and " << even << " Even Digits";

    return 0;
}