#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  if(n%7==0||n%10==7)
    cout<<"buzz";
  else
    cout<<"not buzz";
  return 0;
}
