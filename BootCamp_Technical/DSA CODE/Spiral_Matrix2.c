#include <stdio.h>
int main()
{
    int n = 5;
    int size = 2 * n - 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int top = i;
            int left = j;
            int right = (size - 1) - j;
            int bottom = (size - 1) - j;

            int min = top;
            if (left < min)
                min = left;
            if (right < min)
                min = right;
            if (bottom < min)
                min = bottom;

            printf("%2d", n - min);
        }
        printf("\n");
    }

    return 0;
}