#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 2, 2, 3, 1, 4};
    int hash[10] = {0};

    int maxfreq = 0;
    int maxele = -1;
    for (int i = 0; i < 7; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (hash[i] > maxfreq)
        {
            maxfreq = hash[i];
            maxele = i;
        }
    }

    printf("element with max freq %d\n", maxele);
    printf("maximum freq %d", maxfreq);
    return 0;
}