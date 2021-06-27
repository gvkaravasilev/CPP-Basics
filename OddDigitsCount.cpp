#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;
    int oddDigitsCount;

    while (n > 0)
    {
        int digit = n % 10;

        if(digit % 2 == 1)
        {
            oddDigitsCount++;
        }
        n = n / 10;
    }
    cout << oddDigitsCount;
}