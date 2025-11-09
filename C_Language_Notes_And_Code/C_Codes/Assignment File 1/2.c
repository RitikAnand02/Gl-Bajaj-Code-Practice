#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 3)
    {
        printf("%d ", i);
        if (i == 2)
            break;
        i++;
    }
    printf("End");
    return 0;
}