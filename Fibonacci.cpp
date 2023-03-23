#include<iostream>
using namespace std;
int main()
{
    int First = 0 , Second = 1 ,n;
    cout<<"Enter the value : ";
    cin>>n;

    cout<<First<<" "<<Second<<" ";

    for(int i = 0;i<=n;i++)
    {
         int sum= First+Second;
         cout<<sum<<" ";

         First=Second;
         Second=sum;
    }

}
