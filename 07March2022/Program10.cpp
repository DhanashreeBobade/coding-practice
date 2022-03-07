#include<iostream>
using namespace std;


int main( )
{
    int i, j, k;
    cout<<"Enter the first number : "<<endl;
    cin>>i;
    cout<<"Enter the second number : "<<endl;
    cin>>j;
    cout<<"Enter the third number : "<<endl;
    cin>>k;

    if(i>j && i>k)
{
    cout<<i<<" is the maximum among "<<i<<", "<<j<<" and "<<k;
}
else if (j>i && j>k)
{
    cout<<j<<" is the maximum among "<<j<<", "<<j<<" and "<<k;
}

else
{
 cout<<k<<" is the maximum among "<<i<<", "<<j<<" and "<<k;
}

    return 0;
}