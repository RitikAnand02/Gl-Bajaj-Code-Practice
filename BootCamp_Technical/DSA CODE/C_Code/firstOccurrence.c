#include <stdio.h>

int firstOccurrence(int arr[], int size, int key)
{
    int low = 0, high = size - 1;
    int result = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            result = mid;
            high = mid - 1;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return result;
}

int main()
{
    int arr[] = {10, 20, 20, 20, 30, 40};
    int size = 6;
    int key = 20;

    int index = firstOccurrence(arr, size, key);

    if (index != -1)
        printf("First occurrence at index %d", index);
    else
        printf("Element not found");

    return 0;
}
