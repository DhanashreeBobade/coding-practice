#include <iostream>
using namespace std;
int main()
{
    int i;
    cout<<" Write a Program to that prints series of Even numbers in reverse order from the limiting number entered by user."<<endl;
    cout<<"Enter a number : ";
    cin>>i;

    while(i >= 1)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        --i;
    }

    return 0;
}