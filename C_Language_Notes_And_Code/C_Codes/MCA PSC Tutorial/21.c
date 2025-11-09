#include <stdio.h>
int main()
{
    int x = 2, y = 2;
    x /= x / y;
    printf("%d\n", x);
    return 0;
}