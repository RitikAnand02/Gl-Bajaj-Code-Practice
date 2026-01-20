#include <stdio.h>

int main()
{
    int a[10][10], r, c;
    int top = 0, left = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    int bottom = r - 1, right = c - 1;

    printf("Spiral order: ");

    while (top <= bottom && left <= right)
    {

        for (int i = left; i <= right; i++)
            printf("%d ", a[top][i]);
        top++;

        for (int i = top; i <= bottom; i++)
            printf("%d ", a[i][right]);
        right--;

        for (int i = right; i >= left; i--)
            printf("%d ", a[bottom][i]);
        bottom--;

        for (int i = bottom; i >= top; i--)
            printf("%d ", a[i][left]);
        left++;
    }

    return 0;
}
