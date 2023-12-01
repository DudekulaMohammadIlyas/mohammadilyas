#include <iostream>
using namespace std;
int main()
{
     int A[] = {1, 1, 222, 3, 5, 6, 8, 5, 1};
     int k, i, n;
     int flag = 0;
     int Count = 0;
     n = sizeof(A) / sizeof(A[0]);
     cout << "Array A :--> ";
     for(i=0; i<n; i++)
        cout << A[i] << " ";
     cout << "\nEnter Element to Search :--> ";
     cin >> k;
     for(i = 0; i < n; i++)
     {
          if(A[i] == k)
          {
               flag = 1;
                Count++;
          }
     }
     if(flag == 0)
     {
          cout << "\nThe element is not present ";
     }
     else
     {
          cout << "\nThe element is present having count : " << Count;
     }
     return 0;
}
