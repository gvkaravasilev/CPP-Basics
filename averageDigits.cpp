#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    double sum = 0;


    while(n != 0)
    {
        int currentDigit = n % 10;
        sum += currentDigit;
        n /= 10;

    }
    double average = sum / 8;
    cout << average;
}
