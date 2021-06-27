#include <iostream>

using namespace std;

int main()
{
    int n = 5;

    int array[n];

    int maxEven = array[0];
    int minOdd = array[0];

    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for(int i = 0; i < n; i++)
    {
      if(array[i] % 2 == 0)
      {
          maxEven = array[i];
      }else if(array[i] % 2 == 1)
      {
          minOdd = array[i];
      }
    }
    for(int i = 0; i < n; i++)
    {
        if(array[i] > maxEven && array[i] % 2 == 0)
        {
            maxEven = array[i];
        }
        if(array[i] < minOdd && array[i] % 2 == 1)
        {
            minOdd = array[i];
        }
    }
    int difference = maxEven - minOdd;

    cout << difference << endl;
}