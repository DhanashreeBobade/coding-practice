#include <iostream>
using namespace std;
int main()
{
    int n, i, j, sum = 0, k;
    cout << "Write a Program to print series of Abundant numbers up to Nth element, where N is a number entered by user." << endl
         << "--------------------------------------------------------------------------------------------------------" << endl;
    cout << "Enter the Nth number : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        k = i / 2;

        for (j = 1; j <= k; j++)
        {
           
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }

        if (sum > i)
        {
            cout << i << " ";
        }

        sum = 0;
    }
    return 0;
}