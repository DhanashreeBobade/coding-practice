#include <iostream>
using namespace std;
int main()
{
    int r, c;
    for (r = 0; r < 4; r++)
    {
        if ((r == 1) || (r == 2))
        {
            cout << "*     *" << endl;
        }

        else
        {
            cout << "* * * *" << endl;
        }
    }
    return 0;
}
