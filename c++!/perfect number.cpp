#include<iostream>
using namespace std;
int main()
{
  int n,i,result=0;
  cin>>n;
  for(i=1;i<n;i++)
  { 
    if(n%i==0)
      result=result+i;
  }
  if(n==result)
    cout<<"perfect number";
  else
    cout<<"not perfect number";
}
