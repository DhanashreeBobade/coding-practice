#include <iostream>
using namespace std;
int main()
{
    int i, j, r;
    char a='A';
    cout << "Enter the number of rows : ";
    cin >> r;

    for (i = 0; i < r; i++)
    {
        for (j = 1; j <=r-i; j++)
        {
            cout << " " << a;
        }
        cout<<endl;
        ++a;
    }
    return 0;
}