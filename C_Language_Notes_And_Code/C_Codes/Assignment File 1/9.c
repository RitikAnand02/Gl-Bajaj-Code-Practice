#include <stdio.h>
int main()
{
    int x = 9, y = 4;
    float result = x / y + x % y;
    printf("%.1f", result);
    return 0;
}