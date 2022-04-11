#include <iostream>
using namespace std;

int main()
{
    int num, n = 1, j, i, a[100], o = 0;
    cout << "Enter the number : ";
    cin >> num;

    for (j = 0; j <= num; j++)
    {
        for (i = 1; i <= num; i++)
        {
            if (i * j == num)
            {
                cout << " " << i << " " << j << endl;
                a[o] = j;
                ++o;
            }
        }
    }

    for (int k = 0; k <= o; k++)
    {
cout<<a[k];
    }
    return 0;
}