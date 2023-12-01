#include <iostream>
using namespace std;
int main()
 {
  int n1, n2, gcd,temp,i;
  cout << "Enter two numbers:\n ";
  cin >> n1 >> n2;
 if ( n2 > n1) {   
    temp = n2;
    n2 = n1;
    n1 = temp;
  }    
  for ( i = 1; i <=  n2; ++i) 
  {
    if (n1 % i == 0 && n2 % i ==0) 
    {
      gcd = i;
    }
  }
  cout << "gcd = " << gcd;
  return 0;
}
