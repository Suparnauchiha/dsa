#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int s, int e) {
    int pivot = arr[s];
    int cnt = 0;
    
    for (int i = s + 1; i <= e; i++) {
        if (arr[i] <= pivot) {
            cnt++;
        }
    }

    // Place pivot at the right position
    int pivotIndex = s + cnt;
    swap(&arr[pivotIndex], &arr[s]);

    // Handle left and right parts
    int i = s, j = e;
    
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot) {
            i++;
        }

        while (arr[j] > pivot) {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex) {
            swap(&arr[i++], &arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e) {
    // Base case
    if (s >= e) {
        return;
    }

    // Partition
    int p = partition(arr, s, e);

    // Sort left part
    quickSort(arr, s, p - 1);

    // Sort right part
    quickSort(arr, p + 1, e);
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
