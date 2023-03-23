#include<iostream>
using namespace std;
int main()
{
    int n,i=1,sum=0;

    cout<<"Enter the counter value : ";
    cin>>n;
    while(i<=n)
    {
      if(i%2==0)
      {
      sum=sum+i;
      i++;
      }
      else
      {
          i++;
      }

    }

    cout<<"Total value is : "<<sum;

}
