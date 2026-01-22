#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 5, 13, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            printf("%d ---> %d\n", arr[i], arr[j]);
        }
    }
    return 0;
}