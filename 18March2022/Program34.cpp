#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cout << "Enter the number of which table you want : ";
    cin >> n;

    for (int j = 1; j <= 10; j++)
    {
        t = j * n;
        cout << n << " X " << j << " = " << t << endl;
    }
    return 0;
}