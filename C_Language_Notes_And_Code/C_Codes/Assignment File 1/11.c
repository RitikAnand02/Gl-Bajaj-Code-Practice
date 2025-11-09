#include <stdio.h>
int main()
{
    int product = 1, i;
    for (i = 2; i <= 4; i++)
    {
        product *= i;
    }

    printf("%d", product);
    return 0;
}