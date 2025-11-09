#include <stdio.h>
int main()
{
    if (7 & 8)
        printf("Welcome");
    if ((~7 & 0x000f) == 8)
        printf("Have a nice Day!\n");
    return 0;
}