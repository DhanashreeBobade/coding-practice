#include <iostream>
using namespace std;
int main()
{
    int num, i, temp, sum = 0;
    cout << "Write a Program to check whether the entered number by user is Deficient or not." << endl
         << "-----------------------------------------------------------------------" << endl;
    cout << "Enter the number : ";
    cin >> num;

    temp = num / 2;
    cout<<temp<<endl;

    for (i = 1; i <= temp; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
           // cout<<sum<<endl;
        }
    }

    if (sum < num)
    {
        cout << num << " is a Deficient Number";
    }

    else
    {
        cout << num << " is Not a Deficient Number";
    }

    return 0;
}