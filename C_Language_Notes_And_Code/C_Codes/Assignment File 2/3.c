#include <stdio.h>
int main()
{
    int x = 1;
    switch (x)
    {
    case 1:
        printf("One ");
    case 2:
        printf("Two ");
    default:
        printf("Default");
    }
    return 0;
}