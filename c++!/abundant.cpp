#include<iostream>
using namespace std;
int main()
{
  int i,n,factor=0,o;
  cin>>n;
  o=n;
  for(i=1;i<=n/2;i++){
    if(n%i==0)
    factor=factor+i;}
  if(factor>o)
    cout<<"abundant number";
  else
    cout<<"not abundant number";
  return 0;
}
