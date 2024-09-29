#include <stdio.h>

void merge(int arr[], int s, int mid, int e) {
    int i, j, k;
    int l1 = mid - s + 1;
    int l2 = e - mid;

    int first[l1], second[l2];
    int mainI = s;

    for (i = 0; i < l1; i++)
        first[i] = arr[mainI++];
    mainI = mid+1;
    for (j = 0; j < l2; j++)
        second[j] = arr[mainI++];

    i = 0;
    j = 0;
    mainI = s;

    while (i < l1 && j < l2) {
        if (first[i] <= second[j]) {
            arr[mainI++] = first[i++];
        } else {
            arr[mainI++] = second[j++];
        }
    }

    while (i < l1) {
        arr[mainI++] = first[i++];
    }

    while (j < l2) {
        arr[mainI++] = second[j++];
    }
}

void mergeSort(int arr[], int s, int e) {
    if (s < e) {
        int mid = s + (e - s) / 2;

        mergeSort(arr, s, mid);
        mergeSort(arr, mid + 1, e);

        merge(arr, s, mid, e);
    }
}

void displayArray(int arr[], int size, const char* message) {
    printf("%s", message);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    displayArray(arr, n, "Original array: ");

    mergeSort(arr, 0, n - 1);

    displayArray(arr, n, "Sorted array: ");

    return 0;
}
