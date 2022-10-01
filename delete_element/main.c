#include <stdio.h>


int main()
{
    int position;
    int arr[10] = { 12,32,41,44,49,57,68,95,645,3453 };
    printf("Enter the index if the number you want to delete from the array:\n");
    scanf_s("%d", &position);
    if (position < 9)
    {
        for (int i = position; i < 10 - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        printf("\nThe array after deleting the number of %d position:\n",position);
        for (int i = 0; i < 9; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else if (position == 9)
    {
        arr[9]=0;
        printf("\nThe array after deleting the number of %d position:\n",position);
        for (int i = 0; i < 9; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
        printf("The index you entered cannot be accessed,Please use an index that exists in the array.\n");
    return 0;
}