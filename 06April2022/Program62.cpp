#include <iostream>
using namespace std;
int main()
{
    int n1, n2;

    cout << "Write a Program that calculates the Greatest Common Divisor of two entered numbers.";
    cout << "Enter the two numbers : ";
    cin >> n1 >> n2;
    if (n2 > n1)
    {
        int temp;
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    for (int i = 2; i <= n2; i++)
    {
        if ((n1 % i == 0) && (n2 % i == 0))
        {
            cout <<i<<endl;
        }
    }
    return 0;
}