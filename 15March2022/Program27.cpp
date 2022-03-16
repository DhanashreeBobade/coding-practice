#include <iostream>
using namespace std;

int main()
{
    int i, j = 0, sum = 0;

    for (i = 0; i < 10; i++)
    {
        j = j + 1;

        sum = sum + j;
    }

    cout << "Sum of First 10 natural numbers : " << sum;
    return 0;
}