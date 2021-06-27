#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    

    for(int i = 100; i <= 999; i++)
    {
        int currentNumber = i;
        int sumOfDigitsOfCurrentNumber = 0;
        while(currentNumber != 0)
        {
            int currentDigit = currentNumber % 10;
            sumOfDigitsOfCurrentNumber += currentDigit;
            currentNumber /= 10;
        }
        if(sumOfDigitsOfCurrentNumber == n)
        {
            cout << i << " ";
        }
    }
}