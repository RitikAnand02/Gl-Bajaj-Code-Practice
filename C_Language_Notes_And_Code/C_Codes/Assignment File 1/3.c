#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40};
    printf("%d", *(arr + 2) + *(arr + 1));
    return 0;
}