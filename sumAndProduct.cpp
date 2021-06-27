#include <iostream>

using namespace std;

int main()
{
    int n = 0;

    cin >> n;

    int sum = 0;
    int product = 1;

    while(n != 0)
    {
        int lastDigit = n % 10;
        sum = sum + lastDigit;
        product = product * lastDigit;
        n = n / 10;
    }
    cout << sum << " " << product;

    return 0;
}
