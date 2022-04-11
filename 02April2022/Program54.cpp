#include <iostream>
using namespace std;
int main()
{
    int r;
    float d;
    cout << "Enter the amount in rupee : ";
    cin >> r;

    d = r / 75.61;

    cout << r << " Rupee = " << d << " $";
    return 0;
}