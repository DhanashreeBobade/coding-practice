#include <iostream>
using namespace std;
int main()
{
    int sec, i, hr;
    cout << "Write a Program to Convert the Hours entered by user into Seconds." << endl;
    cout << "Enter the Hour : ";
    cin >> hr;
    i = hr * 60;
    sec = i * 60;
    cout << sec << " seconds";

    return 0;
}