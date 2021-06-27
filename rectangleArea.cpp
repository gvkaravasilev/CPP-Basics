#include <iostream>

using namespace std;


int main()
{
    int widthA = 0;
    int heightB = 0;

    cout << "Enter width: ";
    cin >> widthA;

    cout << "Enter height: ";
    cin >> heightB;

    int area = widthA * heightB;

    cout << "Area: " << area;

    return 0;
}
