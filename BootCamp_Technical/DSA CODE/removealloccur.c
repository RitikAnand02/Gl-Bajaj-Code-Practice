#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 5, 0, 3, 1, 4};
    int hash[10] = {0};

    int sizebrr = 0;
    for (int i = 0; i < 8; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < 8; i++)
    {
        if (hash[i] > 0)
        {
            sizebrr++;
        }
    }

    int newArr[sizebrr];
    int id = 0;
    for (int i = 0; i < 8; i++)
    {
        if (hash[i] != 0)
        {
            newArr[id++] = i;
        }
    }

    for (int i = 0; i < id; i++)
    {
        printf("%2d", newArr[i]);
    }
    return 0;
}