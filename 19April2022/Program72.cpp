#include <iostream>
using namespace std;
int main()
{
    int i, j = 0, n, m;
    cout << "Write a Program that computes sum of all possible divisors of an entered number." << endl<<"-----------------------------------------------------"<<endl;
    cout << "Enter the number : ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            //cout<<i<<endl;
            j = j + i;
            continue;
        }
    }
    cout << "The addition of all possible divisors of " << n << " is " << j;

    return 0;
}