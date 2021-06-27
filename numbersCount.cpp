#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int array[n];
    int dividedBy7Count = 0;

    for(int i = 0; i < n; i ++)
    {
        cin >> array[i];
        if(array[i] % 7 == 0)
        {
            dividedBy7Count++;
        }
    }
    cout << dividedBy7Count;
}