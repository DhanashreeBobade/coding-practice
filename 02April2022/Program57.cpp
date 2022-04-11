#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0;

    cout << " Write a Program that prints series of perfect numbers up to the entered limiting number." << endl;
    cout << "Enter the number : ";
    cin >> n;
    cout << "1";

    for (int j = 2; j <= n; j++)
    {
        
        for (i = 1; i < j; i++)
        {
            if (j % i == 0)
            {
                // cout << i << endl;
                sum = sum + i;
            }
        }

        if (sum == j)
        {
            cout << ", ";
            cout << j;
        }
        sum = 0;
    }
    return 0;
}