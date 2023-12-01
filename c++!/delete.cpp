#include <iostream>
using namespace std;
int main()
{
	int a[100],i,n,pos;
	cin>>n;
	cout<<"enter array elements\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the position to be delete\n";
	cin>>pos;
	for(i=pos-1;i<n;i++)
	{
	a[i]=a[i+1];
	}
	n--;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
	
