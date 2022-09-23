#include <stdio.h>


int main()
{
    int arr[7];

    for (int i = 0; i < 7; ++i)
    {
        printf("Enter the number of index %d in the array:\n", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i <= 6; i++)
    {
        for (int j = 0; j <= 6 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array:\n");
    for (int i = 0; i <= 6; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}