#include <iostream>
using namespace std;

int main()
{
    int a = 1, c = 7, k = 0;
    cout << "Print Pattern" << endl;
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            cout << " " << c << " ";
            --c;
        }
        c = c + k;
        ++k;

        cout << endl;
    }
    return 0;
}