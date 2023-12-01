#include <iostream>
using namespace std;

int main()
 {
    int n, sum = 0, temp;
    
    cout << "Enter the integer number::\n";
    cin >> n;
    
    cout << "The sum of " << n << " digits is = ";
    while (n > 0) {
        temp = n%10;    
        sum = sum+temp;    
        n= n/10;    
    }
    
    cout << sum << "\n";
    return 0;
}
