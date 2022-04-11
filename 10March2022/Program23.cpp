#include <iostream>
using namespace std;


void Check(char a, char b, int i)
{

    if (((a != 'F') || (a != 'M')) && ((b != 'Y') || (b != 'N')))
    {
        cout << "Error" << endl;
    }

    else if (a == 'F')
    {
        cout << "She will work in Urban area ";
    }
    else if (a == 'M' && (i >= 20 && i <= 40))
    {
        cout << "He may work anywhere ";
    }

    else if (a == 'M' && (i >= 40 && i <= 60))
    {
        cout << "He will work in Urban area ";
    }

    else
    {
        cout << "";
    }
}

int main()
{

    int i;
    char a, b;
    cout << "Enter your age : ";
    cin >> i;

    if (i != int(i))
    {
        cout << "Error";
    }

    else
    {
        cout << "Enter your Sex(F/M) : ";
        cin >> a;
        cout << "Enter your Maratial Status(Y/N) : ";
        cin >> b;
        Check(a, b, i);
    }

    return 0;
}