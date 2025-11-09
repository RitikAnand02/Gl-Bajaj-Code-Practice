#include <stdio.h>
int main()
{
    int a = 97;
    int b = sizeof(a++);
    printf("Value of a  is %d", a);
    return 0;
}