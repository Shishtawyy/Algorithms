// Quick sort in C

#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high) {

    int p = arr[high];
    int i = (low - 1);

    for (int j = low; j < high; j++) {
        if (arr[j] <= p) {

            i++;

            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);

    return (i + 1);
}

void sort(int array[], int low, int high) {
    if (low < high) {

        int pi = partition(array, low, high);

        sort(array, low, pi - 1);

        sort(array, pi + 1, high);
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main() {
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        printf("Please enter the number of index %d:",i);
        scanf("%d",&arr[i]);
    }



    sort(arr, 0, 5);

    printf("Sorted array in ascending order: \n");
    printArray(arr, 6);
}