#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int product = 1;

    while(n > 0)
    {
        int lastDigit = n % 10;

        product = product * lastDigit;

        n = n / 10;
    }
    if(product >= 100 && product <= 999)
    {
        cout << "YES" << " " << product;
    }else
    {
        cout << "NO";
    }
}