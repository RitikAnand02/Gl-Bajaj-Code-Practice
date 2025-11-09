#include <stdio.h>
int main()
{
    int d, a = 1, b = 2, c = 3;
    d = a++ + ++b + ++c + b++;
    printf("%d %d %d %d", d, a, b, c);
    return 0;
}