#include<iostream>
using namespace std;
int main()
{
  int i,n,sum=0,temp;
  cin>>n;
  temp=n;
  while(n>0)
  {
    i=n%10;
    sum+=i*i*i;
    n=n/10;
  }
  if(temp==sum)
    cout<<"narcissistic number";
  else
    cout<<"not narcissitic number";
  return 0;
}
