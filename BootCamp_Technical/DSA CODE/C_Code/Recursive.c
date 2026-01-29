#include <stdio.h>
void rev(int arr[], int);
int main()
{
    int arr[10] = {1, 2, 3, 4, 1};
    rev(arr, 0);
    return 0;
}

void rev(int arr[], int index)
{
    if (index == 5)
        return;
    rev(arr, index + 1);
    printf("%d", arr[index]);
}