#include <iostream>
using namespace std;
int main()
{
    int m, v, a;
    cout << "Kinetic Energy ";
    cout << "Mass = ";
    cin >> m;
    cout << "Velocity = ";
    cin >> v;
    a = v * v;
    float K;
    K = 0.5*m * a;

    cout << " Kinetic Energy of that Object is : " << K;

    return 0;
}