#include <stdio.h>
int main()
{
    int arr[] = {4, 4, 6, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 8;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[i] + arr[j] == sum)
                printf("%d ---> %d\n", arr[i], arr[j]);
        }
    }
    return 0;
}