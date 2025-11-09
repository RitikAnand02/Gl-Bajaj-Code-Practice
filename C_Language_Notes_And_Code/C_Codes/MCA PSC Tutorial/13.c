#include <stdio.h>
int main()
{
    char c = 48;
    int i, mask = 01;
    for (i = 1; i <= 5; i++)
    {
        printf("%c", c | mask);
        mask = mask << 1;
    }
    return 0;
}