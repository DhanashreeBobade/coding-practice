#include <iostream>
using namespace std;
int main()
{
    int num, n, temp, sum = 0;
    cout << " Write a Program to that accepts an integer value from user and prints the sum of all digits from that number." << endl
         << "-----------------------------------------------------------------" << endl;
    cout << "Enter the number : ";
    cin >> num;
    temp = num;
    while (num != 0)
    {
        n = num % 10;
        num = num / 10;
        sum = n + sum;
    }

    cout << "The sum of digits from numbers " << temp << " is " << sum;

    return 0;
}