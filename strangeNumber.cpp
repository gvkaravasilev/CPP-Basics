#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int firstDigit = (n / 1000) % 100;
    int secondDigit = (n / 100) % 10;
    int thirdDigit = (n / 10) % 10;
    int lastDigit = n % 10;

    int nWithoutSecondDigit = (firstDigit * 100) + (thirdDigit * 10) + lastDigit;
    int nWithoutThirdDigit = (firstDigit * 100) + (secondDigit * 10) + lastDigit;





    cout << nWithoutSecondDigit + nWithoutThirdDigit;


    return 0;
}
