#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 2, 1, 3, 1, 4};
    int hash[10] = {0};

    for (int i = 0; i < 7; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (hash[i] > 0)
        {
            printf("%d --> %d\n", i, hash[i]);
        }
    }
    return 0;
}