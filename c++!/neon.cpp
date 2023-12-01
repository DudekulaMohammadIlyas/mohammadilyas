#include<iostream>
#include<cmath>
using namespace std; 

int main() 
{
	int num,sq,i,sum=0;
	cin>>num;
	sq=pow(num,2);
	while(sq!=0)
	{
		sum=sum+sq%10;
		sq=sq/10;
	}
	if(sum==num)
	  cout<<num<<" is neon number";
	else
	  cout<<num<<" is not neon number";
}
