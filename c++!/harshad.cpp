#include<iostream>
using namespace std;
int main()
{
  int n,i,rem,result=0;
  cin>>n;
  i=n;
  while(n>0)
  {
    rem=n%10;
    result=result+rem;
    n=n/10;
  }
  if(i%result==0)
    cout<<"harshad number";
  else
    cout<<"not harshad number";
}
