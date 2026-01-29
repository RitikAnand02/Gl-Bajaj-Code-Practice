// #include <stdio.h>
// int main()
// {
//     int n, rem = 0;
//     printf("Enter Number: ");
//     scanf("%d", &n);

//     while (n != 0)
//     {
//         rem = n % 2;
//         n = n / 2;
//         printf("%d", rem);
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int arr[30];
    int n;
    int rem = 0;
    printf("Enter No of the Size :");
    scanf("%d", &n);

    printf("Enter the Element : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Binary Conversion:\n ");
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int bin[32];
        int j = 0;
        while (num > 0)
        {

            bin[j++] = num % 2;
            num = num / 2;
        }

        for (int k = j - 1; k >= 0; k--)
        {
            printf("%d", bin[k]);
        }
        printf("\n");
    }
    return 0;
}