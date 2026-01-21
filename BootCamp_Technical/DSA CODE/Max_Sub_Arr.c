#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[] = {2, 5, -7, 1, 8};
    int max = INT_MIN;

    for (int i = 0; i <= 4; i++)
    {
        for (int j = i; j <= 4; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            if (sum > max)
            {
                max = sum;
            }
        }
    }
    printf("Maximum Subarray Sum is %d", max);
    return 0;
}