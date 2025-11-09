#include <stdio.h>
int main()
{
    printf("%d ", getValue());
    printf("%d ", getValue());
    printf("%d", getValue());
    return 0;
}

int getValue()
{
    static int value = 10;
    return value--;
}