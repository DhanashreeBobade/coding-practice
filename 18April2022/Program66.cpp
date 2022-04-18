#include <iostream>
using namespace std;
int main()
{
    int i, j,n=0;
    char a = 'A';
    cout << "Pattern"<<endl;

    for (i = 0; i < 4; i++)
    {
        for (j = 1; j <= 4 - i; j++)
        {
            cout << a << " ";
            a = a + 2;
        }
        cout << endl;
        ++n;
        a = 'A';
        a=a+n;
    }
    return 0;
}