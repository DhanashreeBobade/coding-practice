#include <iostream>
using namespace std;
int main()
{
    int feet, cm;
    cout << " Write a Program to Convert enter distance in feet to centimetres. Input: Distance in Feet: 6ft" << endl
         << "----------------------------------------------" << endl;
    cout << "Distance in feet : ";
    cin >> feet;
    cm = feet * 30;
    cout << "Equivalent distance for " << feet << "ft is " << cm << "cm";
    return 0;
}