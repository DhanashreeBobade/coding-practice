#include <iostream>
using namespace std;

int main()
{
    char a;
    cout<<"Enter the Alphabate : ";
    cin>>a;

    if((a>='a' && a<='z') || (a>='A' && a<='Z'))
    {
        cout<<a<<" is an alphabate ";
    }

    else
    {
        cout<<a<<" is not an alphabate ";
    }

    return 0;
}