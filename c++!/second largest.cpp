#include<iostream>
using namespace std;
int main()
{
  int i,a[100],n,large,smax;
  cout<<"enter the size of array\n";
  cin>>n;
  cout<<"enter elements in array\n";
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  large=a[0];
  for(i=0;i<n;i++)
  {
    if(large<a[i])
      large=a[i];
  }
  smax=a[0];
  for(i=0;i<n;i++)
  {
    if(smax<a[i])
    {
      if(a[i]!=large)
      smax=a[i];
    }
  }
  cout<<"second largest is:\n"<<smax;
  return 0;
}
