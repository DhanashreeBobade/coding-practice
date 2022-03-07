/*Digits: 48-57
Capital alphabets: 65-90
Small alphabets: 97-122*/

#include<iostream>
using namespace std;
int main( )
{
    char a;
    cout<<"Enter any chracter : ";
    cin>>a;

    if((a>=48 && a<=57) || (a>= 65 && a<=90)||(a>=97 && a<=122))
    {
        cout<<a<<" is not a special character ";
    }

    else
    {
        cout<<a<<" is a special character";
    }
    return 0;
}