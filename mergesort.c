#include <stdio.h>

#define MAX_SIZE 100  // Define a maximum size for the array

void merge(int *arr, int s, int e) {
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int first[MAX_SIZE], second[MAX_SIZE];

    // Copy values
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    // Merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2) {
        if (first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        } else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2) {
        arr[mainArrayIndex++] = second[index2++];
    }
}

void mergeSort(int *arr, int s, int e) {
    // Base case
    if (s >= e) {
        return;
    }

    int mid = (s + e) / 2;

    // Sort left part
    mergeSort(arr, s, mid);

    // Sort right part
    mergeSort(arr, mid + 1, e);

    // Merge
    merge(arr, s, e);
}

int main() {
    int n;
    int arr[MAX_SIZE];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n > MAX_SIZE) {
        printf("Number of elements exceeds maximum size of %d\n", MAX_SIZE);
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    mergeSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
