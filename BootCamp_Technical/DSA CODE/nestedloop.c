#include <stdio.h>
int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            for (int k = 4; k >= 2; k--)
            {
                printf("%d=%d=%d\n", i, j, k);
            }
        }
    }
    return 0;
}