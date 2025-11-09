#include <stdio.h>
int main()
{
    enum color
    {
        black,
        blue,
        red,
        green
    };
    printf("%d %d", black, red);
    return 0;
}