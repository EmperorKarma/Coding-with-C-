#include<iostream>
using namespace std;
int main()
{
    int ch;
    cout<<"Enter the value : ";
    ch=cin.get();

    if(ch>=97)
    {
        cout<<"Lower Case Letter";
    }

    else if(ch == 122)
    {
        cout<<"Lower case";

    }

    else if(ch>=65)
    {
        cout<<"Upper case";
    }

    else if(ch == 90)
    {
        cout<<"Upper case";
    }

    else if(ch>=48)
    {
        cout<<"Numerical value";
    }

    else if(ch == 57)
    {
        cout<<"Numerical value";
    }
}
