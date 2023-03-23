#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the Number : ";
    int a;
    int sum=0;
    cin>>a;

    for(int i=1;i<=a;i++)    {
        sum+=i;

    }

    cout<<"The sum is : "<<sum;
}
