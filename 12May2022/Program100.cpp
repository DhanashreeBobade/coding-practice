#include <iostream>
using namespace std;
int main()
{
    int i, j, n = 3,num=3;
    char a='B';

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if (j <= n)
            {
                cout << "   ";
            }
            else
            {   --a;
                cout <<a<<num<<" ";
                ++num;
            }
        
        }
        a = a + i +1;
        num=3;
        --n;
        cout << endl;
    }

    return 0;
}