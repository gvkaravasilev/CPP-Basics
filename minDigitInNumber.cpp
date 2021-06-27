#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int smallest = n % 10;

    while(n >  0)
    {
        int lastDigit = n % 10;

        if(smallest > lastDigit){
            smallest = lastDigit;
        }

        n = n / 10;
    }
    cout << smallest << endl;
}