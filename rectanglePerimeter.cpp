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

    int perimeter = 2 * (widthA + heightB);

    cout << "Perimeter: " << perimeter;

    return 0;
}
