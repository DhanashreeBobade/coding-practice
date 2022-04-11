#include <iostream>
using namespace std;
int main()
{
    int i, r, v;

    cout << "Ohm's Law" << endl;
    cout << "Enter Current I = ";
    cout << "amp" << endl;
    cout << "Enter Ressistance = ";
    cin >> r;

    v = i * r;
    cout << "Voltage = " << v << " v";
    return 0;
}