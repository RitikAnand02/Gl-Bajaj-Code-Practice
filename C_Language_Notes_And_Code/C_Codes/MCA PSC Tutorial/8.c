#include <stdio.h>
int main()
{
    int n = 1;
    printf("%d == 1 is"
           "%s\n",
           n, n == 1 ? "TRUE" : "FALSE");
    return 0;
}