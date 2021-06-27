#include <iostream>

using namespace std;

int main()
{
    int a;

    cin >> a;

    int arr[2];

    int sum = 0;
    int product = 1;

    for(int i = 0; i < a; i++)
    {
        cin>> arr[i];
    }

    for(int i = 0; i < a; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }

    cout << sum << " " << product; 
}