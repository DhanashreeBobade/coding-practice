#include <iostream>
using namespace std;

class Data
{
public:
    int i, j;
    char a;
    char b;
    void Entry()
    {
        cout << "Enter your Sex(F/M) : ";
        cin >> a;
        cout << "Enter your Maratial Status(Y/N) : ";
        cin >> b;
    }

    void Check()
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
};

int main()
{

    int i, j;
    cout << "Enter your age : ";
    cin >> i;
   
    if (i == int(i))
    {
        Data obj;
        obj.Entry();
        obj.Check();
    }
    else
    {
        cout << "Error";
    }

    return 0;
}