#include <iostream>
using namespace std;
int main()
{
    int num, count = 0, temp;
    cout << "Write a Program that takes a number as input from user and prints the digit count from that number." << endl<< "------------------------------------------------------------------------------------" << endl;
    cout << "Enter the number : ";
    cin >> num;
    temp = num;

    while (num != 0)
    {
        num = num / 10;
        ++count;
    }

    cout << "The number " << temp << " has " << count << " digits";

    return 0;
}