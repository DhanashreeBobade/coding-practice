#include <iostream>
using namespace std;
int main()
{
    int i;

    cout << "Write a Program that skips the occurrence of numbers that are divisible by 2 using continue statement. Print this sequence up to 100." << endl;
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}