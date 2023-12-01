#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string r;
  r=(n%3==0)?"divisible":"not divisible";
  cout<<r;
}
