#include <stdio.h>

int binarysearch(int arr[],int low,int high, int item)
{
    int mid = (low + high) / 2;
    int guess = arr[mid];
    if (low > high)
        return -1;
    else if (guess == item)
        return mid;
    else if (guess > item)
        return binarysearch(arr,low, mid - 1,item);
    else
        return binarysearch(arr,mid + 1,high,item);


}


int main()
{
    int guess;
    int arr[7] ;
    for (int i = 0; i < 7; ++i)
    {
        printf("Enter the number of index %d in the array:\n", i);
        scanf("%d", &arr[i]);
    }
    printf("guess a number of the one U entered:\n");
    scanf_s("%d", &guess);
    int position = binarysearch(arr,0,7,guess);
    if (position == -1)
    {
        printf("the item doesn't exist in the array");
    }
    else
        printf("the number is at index %d in the array", position);
    return 0;
}


