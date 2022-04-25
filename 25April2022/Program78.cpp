#include <iostream>
using namespace std;
int main()
{
    int i,j=1 ,temp, f, k = 0, n;
    cout << "Write a Program to print Fibonacci Series of n Elements : ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        f = k;
        cout << f << " ";
        temp = k;
        k = k + j;
        j = temp;
    }
    return 0;
}