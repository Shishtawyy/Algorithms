#include <stdio.h>


int binarysearch(int arr[],int item)
{
    int low=0;
    int high=9;
    while (low <= high)
    {
        int mid = (low+high)/2;
        int guess=arr[mid];
        if(guess==item)
            return mid;
        if(guess>item)
            high=mid-1;
        if(guess<item)
            low=mid+1;
    }
    return -1;
}



int main()
{
    int guess;
    int arr[7] ;
    for (int i = 0; i < 7; ++i)
    {
        printf("Enter the number of index %d in the array:\n", i);
        scanf("%d", &arr[i]);
    }    printf("guess a number\n");
    scanf("%d",&guess);
    int position= binarysearch(arr,guess);
    if(position==-1)
    {
        printf("the item doesn't exist in the array.");
    }
    else
        printf("the item in the array at index %d",position);
    return 0;
}