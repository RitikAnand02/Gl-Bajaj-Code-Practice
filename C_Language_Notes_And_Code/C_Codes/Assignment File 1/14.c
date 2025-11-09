#include <stdio.h>
int main()
{
    int value = 2;
    switch (value * 2)
    {
    case 2:
        printf("Two");
        break;
    case 4:
        printf("Four");
        break;
    case 6:
        printf("Six");
        break;
    default:
        printf("Other");
    }
    return 0;
}
