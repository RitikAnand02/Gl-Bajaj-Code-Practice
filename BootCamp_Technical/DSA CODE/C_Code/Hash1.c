#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 2, 1, 3, 1, 4};

    for (int i = 0; i < 7; i++)
    {

        int ele = arr[i];
        int count = 0;
        for (int j = 0; j < 7; j++)
        {

            if (ele == arr[j])
            {
                count++;
            }
        }
        printf("%d--->%d\n", ele, count++);
    }
    return 0;
}