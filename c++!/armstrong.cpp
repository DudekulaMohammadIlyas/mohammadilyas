#include<iostream>
using namespace std;
int main()
{
  int n,i,rem,result;
  cin>>n;
  i=n;
  while(n>0)
  {
    rem=n%10;
    result=result+(rem*rem*rem);
    n=n/10;
  }
  if(result==i)
    cout<<"armstrong number";
  else 
    cout<<"not armstrong";
}
