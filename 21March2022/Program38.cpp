#include <iostream>
using namespace std;

int main()
{
    int s, c, num, n = 1;
    cout << "Enter the number : ";
    cin >> num;

    for (int j = 0; j < num; j++)
    {
        s = n * n;
        c = n * n * n;
        cout << "Cube of : " << n << " : " << c << " Square of : " << n << " : " << s << endl;
        s = 0;
        ++n;
    }
    return 0;
}