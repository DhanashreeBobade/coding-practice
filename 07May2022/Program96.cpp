#include <iostream>
using namespace std;
int main()
{
    int num, rem, i = 0, temp;
    cout << " Write a Program that takes a number as input from user and prints the counts the occurrence of even digits from it" << endl
         << "-----------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Enter the number : ";
    cin >> num;
    temp = num;

    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        if (rem % 2 == 0)
        {
            ++i;
        }
    }

    cout << "The number " << temp << " has " << i << " Even Digits";

    return 0;
}