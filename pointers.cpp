#include <iostream>
#include <stdio.h>
#include <math.h>


using namespace std;


void update(int *a, int *b)
{
    int c = *a;
    *a = *a + *b;
    *b = abs(c - *b);
    
}
int main()
{
    int a, b;
    int *pa = &a;
    int *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d",a , b);
}
