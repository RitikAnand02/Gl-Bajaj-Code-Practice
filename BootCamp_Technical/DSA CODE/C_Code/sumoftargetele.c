// #include <stdio.h>
// int main()
// {
//     int arr[] = {2, 4, 12, 23, 16};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int sum;

//     printf("Target Sum: ");
//     scanf("%d", &sum);

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j <= n - 1; j++)
//         {
//             if (arr[i] + arr[j] == sum)
//                 printf("%d ---> %d\n", arr[i], arr[j]);
//                 break;
//         }
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int arr[] = {2, 6, 12, 6, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target[] = {8, 12, 18, 22, 30, 20};
    int n2 = sizeof(target) / sizeof(target[0]);

    for (int t = 0; t < n2; t++)
    {
        int tar = target[t];

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j <= n - 1; j++)
            {
                if (arr[i] + arr[j] == tar)
                {
                    printf("target = %d => %d ---> %d\n", tar, arr[i], arr[j]);
                }
            }
        }
    }
    return 0;
}