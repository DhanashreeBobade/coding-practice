#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, total;
    float Percentage;
    cout << "Enter the Total : ";
    cin >> total;
    cout << "Physics : ";
    cin >> a;
    cout << "Chemistry : ";
    cin >> b;
    cout << "Biology : ";
    cin >> c;
    cout << "Mathematics : ";
    cin >> d;
    cout << "Computer : ";
    cin >> e;

    int sum = a + b + c + d + e;
    Percentage = (sum * 100) / total;

    if (Percentage >= 90)
    {
        cout << "Percentage >= 90% : Grade A";
    }

    else if (Percentage >= 80)
    {
        cout << "Percentage >= 80% : Grade B";
    }

    else if (Percentage >= 70)
    {
        cout << "Percentage >= 70% : Grade C";
    }

    else if (Percentage >= 60)
    {
        cout << "Percentage >= 60% : Grade D";
    }

    else if (Percentage >= 40)
    {
        cout << "Percentage >= 40% : Grade E";
    }

    else
    {
        cout << "Percentage < 40% : Grade F";
    }
    return 0;
}