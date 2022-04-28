#include <iostream>
using namespace std;
int main()
{
    int i, n = 50, sum = 0;

    cout << " Write a Program that skips the occurrence of perfect numbers using continue statement. Print this sequence up to 100." << endl;
    cout << "1";

    for (i = 1; i <= 100; i++)
    {
        for(int j = 1)
        if (n / i == 0)
        {
            sum = sum + i;
        }
    }

    return 0;
}