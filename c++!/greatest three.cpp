#include <iostream>
using namespace std;
int main() 
{
    double n1, n2, n3;
    cout << "Enter three numbers: \n";
    cin >> n1 >> n2 >> n3;
    if(n1 >= n2 && n1 >= n3)
        cout << "Largest number: \n" << n1;
    else if(n2 >= n1 && n2 >= n3)
        cout << "Largest number: \n" << n2;
    else 
        cout << "Largest number: \n" << n3;
    return 0;
}
