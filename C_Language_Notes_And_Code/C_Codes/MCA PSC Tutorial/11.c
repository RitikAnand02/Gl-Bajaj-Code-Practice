#include <stdio.h>
int main()
{
    int a = 1, b = 2;
    a += b -= a;
    printf("%d %d", a, b);
    return 0;
}