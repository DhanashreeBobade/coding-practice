#include <iostream>
using namespace std;

int main()
{
    int rows = 4;
    int n = 0;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            cout << " " << ++n;
        }
        cout<<endl;
    }
    return 0;
}