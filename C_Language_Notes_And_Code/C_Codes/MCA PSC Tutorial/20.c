#include <stdio.h>
int main()
{
    int x = 7;
    int y = 0 == 1 && x++;
    printf("%d%d\n", x, y);
    return 0;
}