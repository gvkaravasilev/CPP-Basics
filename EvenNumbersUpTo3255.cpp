#include <iostream>

using namespace std;

int main()
{
    for(int i = 2; i <= 3255; i++)
    {
        if(i % 2 == 0)
        {
            cout << i << " ";
        }
    }
}