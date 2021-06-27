#include <iostream>

using namespace std;

int main()
{
    string a, b;

    cin >> a;
    cin >> b;

    int sizeA = a.size();
    int sizeB = b.size();

    string concatenate = a + b;

    swap(a[0], b[0]);

    cout << sizeA << " " << sizeB << endl;
    cout << concatenate << endl;
    cout << a << " " << b;

}