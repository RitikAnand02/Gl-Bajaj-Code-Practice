#include <stdio.h>

int findPosition(int arr[], int size, int key)
{
    int low = 0, high = size - 1;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid; 
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low; 
}

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int key = 35;

    int pos = findPosition(arr, size, key);

    for (int i = size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = key;
    size++;

    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
