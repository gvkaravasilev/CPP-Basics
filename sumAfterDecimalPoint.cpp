#include <iostream>

using namespace std;

int main()
{
    double number = 0.0;

    cin >> number;

    int numberAfterMultiplication = number * 10000;

    int digitsAfterDecimalPoint = numberAfterMultiplication % 10000;
    int digitsSum;

    while(digitsAfterDecimalPoint != 0)
    {
        int lastDigit = digitsAfterDecimalPoint % 10;
        digitsSum = digitsSum + lastDigit;
        digitsAfterDecimalPoint = digitsAfterDecimalPoint / 10;
    }

    cout << digitsSum;


}
