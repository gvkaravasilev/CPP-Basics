#include <iostream>

using namespace std;

int main()
{
    float x;

    cin>> x;

    int xAsInt = x * 10000;

    while(xAsInt % 2 == 0){
        xAsInt = xAsInt / 2;
    }

    cout << xAsInt;
}

