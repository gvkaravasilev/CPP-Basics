#include <iostream>

using namespace std;

int main()
{
    double number;

    cin >> number;

    int number1 = number * 1000;

    int secondDigitAfterDecimalPoint = number1 / 10 % 10;

    cout << secondDigitAfterDecimalPoint << endl;


}
