//     *
//    * *
//   *   *
//  *     *
// *********

#include <stdio.h>
int main()
{
    int r, c;
    // printf("Enter no of rows: ");
    // scanf("%d", &n);
    for (r = 0; r < 5; r++)
    {
        for (c = 0; c < 9; c++)
        {
            if ((r + c) == 4 || (c - r) == 4 || r == 4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}