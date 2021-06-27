#include <iostream>

using namespace std;

int main()
{
    int n = 0;

    cin >> n;

    while(n != 0)
    {
        int lastDigit = n % 10;
        n /= 10;
        cout << lastDigit;
    }
    return 0;
}
