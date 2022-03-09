#include <iostream>
using namespace std;
int main()
{
    int P, T, R, S_I, A;

    cout << "Enter the Money taken / invested : ";
    cin >> P;

    cout << "Enter the Duration in year : ";
    cin >> T;

    cout << "Enter the rate of intrest : ";
    cin >> R;

    S_I = (P * R * T)/100;

    cout << "Therefore the simple interest is : " << S_I<<endl;

    A = P + S_I;

    cout << "The amount to be paud after " << T << " years is " << A;
    return 0;
}