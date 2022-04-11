#include<iostream>
using namespace std;

int main( )
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%4==0 && i%7==0)
        {
            cout<<" "<<i<<" ";
        }
    }
    
    return 0;
}