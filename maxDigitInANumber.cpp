#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int biggest = n % 10;

    while (n > 0)
    {
        int lastDigit = n % 10;

        if(biggest < lastDigit){
            biggest = lastDigit;
        }

        n = n / 10;
    }

    cout << biggest << endl;
    
}