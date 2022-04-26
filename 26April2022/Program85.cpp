#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0;

    cout << " Write a Program to that skips the occurrence of perfect numbers using continue statement. Print this sequence up to 100." << endl;
    cout << "1";

    for (int j = 2; j <= 100; j++)
    {
        n = j / 2;

        for (i = 1; i <= n; i++)
        {
            if (j % i == 0)
            {
                sum = sum + i;
            }
        }

        if (sum == j)
        {

            continue;
        }

        else
        {
            cout << ", ";
            cout << j;
        }
        sum = 0;
    }
    return 0;
}