#include <iostream>
using namespace std;
int main()
{
    int n, i, j = 0;
    cout << "Write a Program that accepts 5 integer values from user and compares two consecutive inputs and if the second of them is lesser that the previous one then the code exits out of loop and prints the unexpected input." << endl;
    cout << "Enter the numbers : ";
    for (i = 0; i < 5; i++)
    {
        cin >> n;

        if (j > n)
        {
            cout << "Loop is exited with input " << n << ".";
            break;
        }
        j = n;
    }

    return 0;
}