// *   *   *   * 
//   *   *   *   
//     *   *     
//       *       
//     *   *     
//   *   *   *   
// *   *   *   * 

#include <stdio.h>
int main()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i <= j && i + j <= 6 && (i + j) % 2 == 0)
            {
                printf("* ");
            }

            else if (i >= j && i + j >= 6 && (i + j) % 2 == 0)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}