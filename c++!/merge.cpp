#include <iostream>
using namespace std;
int main()
{
  
    int firstArrSize, secondArrSize;
    cout << "Enter the size of the first array: " << endl;
    cin >> firstArrSize;
    cout << "Enter the size of the second array: " << endl;
    cin >> secondArrSize;
    int firstArr[firstArrSize], secondArr[secondArrSize], finalArr[firstArrSize + secondArrSize];
    cout << "Enter values for the first array: " << endl;
    for (int i = 0; i < firstArrSize; i++)
    {
        cout << "Enter value for index " << i << " : " << endl;
        cin >> firstArr[i];
    }
    cout << "Enter values for the second array: " << endl;
    for (int i = 0; i < secondArrSize; i++)
    {
        cout << "Enter value for index " << i << " : " << endl;
        cin >> secondArr[i];
    }
    for (int i = 0; i < firstArrSize; i++)
    {
        finalArr[i] = firstArr[i];
    }
    for (int j = 0; j < secondArrSize; j++)
    {
        finalArr[j + firstArrSize] = secondArr[j];
    }
    cout << "Final array: " << endl;
    for (int i = 0; i < firstArrSize + secondArrSize; i++)
    {
        cout << finalArr[i] << ' ';
    }
}

