#include <stdio.h>
int main()
{
    int num;
    for (num = 1; num <= 10; num++)
    {
        if (num % 3 == 0)
            continue;
        if (num > 7)
            break;
        printf("%d ", num);
    }
    return 0;
}