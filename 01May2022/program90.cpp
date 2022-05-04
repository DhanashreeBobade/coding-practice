#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Write a Program to take inputs from user and print them using while loop until user enters a negative number." << endl;
    cout<<"Enter the number : ";
    cin >> n;
    while (n > 0)
    {
        cout << "Enter the number : ";
        cin >> n ;
    }
    cout << "You entered a negative number";
    return 0;
}