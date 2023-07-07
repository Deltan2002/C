#include <stdio.h>

void swap(int *l, int *r) {
    int temp = *l;
    *l = *r;
    *r = temp;
}

int partition(int arr[], int left, int right) {
    int pivot = arr[left];
    int i = left;
    int j = right;

    while (i < j) {
        while (arr[i] <= pivot ) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[left], &arr[j]);
    return j;
}

void quickSort(int arr[], int left, int right) {
    if (left < right) {
        int partitionIndex = partition(arr, left, right);
        quickSort(arr, left, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, right);
    }
}

int main() {
    int arr[] = { 3, 4, 1, 2, 5, 6 };
    int size = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, size - 1);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
