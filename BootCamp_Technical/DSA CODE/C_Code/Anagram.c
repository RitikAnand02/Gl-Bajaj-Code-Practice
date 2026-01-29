#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 2, 1, 3, 1, 4};
    int hash1[10] = {0};
    int brr[] = {1, 2, 3, 2, 1, 3, 1, 4};
    int hash2[10] = {0};

    for (int i = 0; i < 8; i++)
    {
        hash1[arr[i]]++;
    }

    for (int i = 0; i < 8; i++)
    {
        hash2[brr[i]]++;
    }

    for (int i = 0; i < 10; i++)
    {
        if (hash1[i] != hash2[i])
        {
            printf("Not Anagram");
            return 0;
        }
    }
    printf("Anagram");

    return 0;
}