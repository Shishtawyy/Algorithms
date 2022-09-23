# include <stdio.h>

int main() {
    int a[5], b[4], arr[9], i, j, k = 1,firstArrSize=5, secondArrSize=4;
    for (int i = 0; i < 5; ++i)
    {
        printf("Enter the number of index %d in the first array:\n", i);
        scanf("%d", &a[i]);
    }


    for (int i = 0; i < 4; ++i)
    {
        printf("Enter the number of index %d in the second array:\n", i);
        scanf("%d", &b[i]);
    }

    while (i<firstArrSize && j<secondArrSize)
    {
        if(a[i<=b[j]])
        {
            arr[k]=a[i];
            i++;
        }
        else
        {
            arr[k]=b[j];
            j++;
        }
        k++;
    }

        if(a[i]>=a[i+1])
        {
            arr[k]=a[i];
            arr[k+1]=a[i+1];
        }
        else
        {
            arr[k]=a[i+1];
            arr[k+1]=a[i];
        }


        if(b[j]>=b[j+1])
        {
            arr[k]=b[j];
            arr[k+1]=b[j+1];
        }
        else
        {
            arr[k]=b[j+1];
            arr[k+1]=b[j];
        }


    printf("\n Element of array after merging and sorting :\n");
    for (i = 1; i <= 9; i++)
        printf("%d \n", arr[i]);
    return (0);
}