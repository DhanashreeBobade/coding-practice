#include<iostream>
using namespace std;

int high(int i,int j)
{
if(i<j)
{
    cout<<j<<" is the maximum among "<<i<<"and"<<j;
}
else if (i==j)
{
    cout<<i<<" and "<<j<<"are equal";
}

else
{
 cout<<i<<" is the maximum among "<<i<<" and "<<j;
}
return(i,j);
}

int main( )
{
    int a, b;
    cout<<"Enter the first number : "<<endl;
    cin>>a;
    cout<<"Enter the second number : "<<endl;
    cin>>b;
    cout<<endl<<high(a,b);

    return 0;
}