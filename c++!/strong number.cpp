#include<iostream>
using namespace std;
int main()
{
  int n,i,sum=0,rem,fact,o;
  cin>>n;
  o=n;
  while(n!=0)
  {
    rem=n%10;
    fact=1;
    for(i=1;i<=rem;i++)
    {
      fact=fact*i;
    }
    sum+=fact;
    n=n/10;
  }
  if(sum==o)
    cout<<"strong number";
  else
    cout<<"not strong number";
  return 0;
}
