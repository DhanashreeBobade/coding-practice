#include <iostream>
using namespace std;
int main()
{
    int i, j = 0, temp, f, k = 1;
    cout << "Write a Program to print Fibonacci Series of 5 Elements." << endl;
    cout << j << " " << k << " ";

    for (i = 0; i < 3; i++)
    {
        f = k + j;
        cout << f << " ";
        temp = k;
        k = f;
        j = temp;
    }
    return 0;
}