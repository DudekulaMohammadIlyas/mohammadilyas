#include<iostream>
using namespace std;
int main()
{
	int a[100],i,pos,n,ele;
	cin>>n;
	cout<<"enter array elements\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter elements to be inserted\n";
	cin>>ele;
	cout<<"enter the position\n";
	cin>>pos;
	for(i=n;i>pos;i--)
	a[i]=a[i-1];
	a[i]=ele;
	n++;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
