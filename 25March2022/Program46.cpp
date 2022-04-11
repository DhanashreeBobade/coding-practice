#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout << "Swapping" << endl;
    cout << "Enter two numbers : " << endl;
    cout << "a : ";
    cin >> a;
    cout << "b : ";
    cin >> b;
    cout << "Before Swap : " << a << " " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "After Swap : " << a << " " << b;

    return 0;
}