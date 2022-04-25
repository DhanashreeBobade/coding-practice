#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << " Write a Program to that accepts 10 integers from user and breaks the loop of accepting numbers if user enters a negative number." << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> n;
        if (n < 0)
        {
            cout << "Negative Number Entered, Exiting The Loop!";
            break;
        }
    }

    return 0;
}