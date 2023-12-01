#include<iostream>
using namespace std;
int main()  
{
    int n, i;
    float num[100], sum, average;
    cout <<"Enter the numbers of data:\n";
    cin >> n;
    while (n > 100 )
    {
        cout <<"the number is out of range\n" << endl;
        cout << "Enter the number again: \n";
        cin  >> n;
    }
    for(i = 0; i < n; ++i)
    {
        cout<<i+1  << ". Enter number: \n";
        cin >> num[i];
        sum = sum+ num[i];
    }
    average = sum / n;
    cout << "Average = " << average;
    return 0;
}
