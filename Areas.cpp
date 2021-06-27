#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a;
    int x;

    cin >> a >> x;

    double area = 0;

    if(x == 1)
    {
        area = 3 * a;
    }else if(x == 2)
    {
        area = a * a;
    }else if(x == 3)
    {
        area = M_PI * a * a;
    }

    printf("%.2f%n", area);
    return 0;
}