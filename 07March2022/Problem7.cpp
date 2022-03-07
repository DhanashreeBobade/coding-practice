#include<iostream>
using namespace std;

int main( )
{
    char str[ ]="a,e,i,o,u,A,E,I,O,U";
    char i;

    cout<<"Enter the character ";
    cin>>i;

    for(int j=0;j<=sizeof(str);j++)
    {
        if(i==str[j])
        {
            cout<<i<<" is an vowel";
            break;
        }

        else
        {
            cout<<i<<" is not an vowel ";
            break;
        }
    }
    cout<<sizeof(str);
    return 0;
}