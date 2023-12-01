#include <iostream>
using namespace std;
int main()
{
   int arr[100],i,n,sum=0;
   cout<<"Enter the number of elements: \n";
   cin>>n;
   cout<<"Enter the value of elements:\n "<<endl;
   for(i=0;i<n;i++)
   {
     cin>>arr[i];
   }
   for(i=0;i<n;i++)
   {
    sum=sum+arr[i];
   }
    cout<<"Sum of elements in an array is:\n "<<sum;
    return 0;
}
