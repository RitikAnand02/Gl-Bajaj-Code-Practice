#include <stdio.h>
int main()
{
    int result = 10 > 5 ? 20 : 30;
    result = result > 25 ? 100 : 200;
    printf("%d", result);

    return 0;
}