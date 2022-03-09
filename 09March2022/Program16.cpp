#include <iostream>
using namespace std;
int main()
{
    int a, b, c, sum;
    cout << "Enter the all three sides of a triangle"<<endl;
    cout << "Side 1 : ";
    cin >> a;
    cout << "Side 2 : ";
    cin >> b;
    cout << "Hypotenuse : ";
    cin >> c;

    sum = (a * a) + (b * b);

    if (sum == (c * c))
    {
        cout << "Triangle Satisfies the Pythagorean Theorem.";
    }

    else
    {
        cout << "Triangle Does Not Satisfies the Pythagorean Theorem.";
    }

    return 0;
}