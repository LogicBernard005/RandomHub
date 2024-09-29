#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int hasDuplicates(int arr[], int size) {
    qsort(arr, size, sizeof(int), compare);

    for (int i = 0; i < size - 1; ++i) {
        if (arr[i] == arr[i + 1]) {
            return 1; 
        }
    }
    return 0; 
}

int main() {
    int arr[] = {4, 2, 1, 3, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (hasDuplicates(arr, size)) {
        printf("Duplicates found in the array.\n");
    } else {
        printf("No duplicates found in the array.\n");
    }

    return 0;
}
