#include <stdio.h>

void countFreqGreaterThanTwo(int arr[], int size) {
    printf("Frequency of elements >= 2 in the array:\n");
    for (int i = 0; i < size; i++) {
        if (arr[i] < 2) {
            continue;
        }
        
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j] && arr[i] >= 2) {
                count++;
                arr[j] = -1;
            }
        }
        if (count >= 2) {
            printf("%d occurs %d times\n", arr[i], count);
        }
    }
}

int main() {
    int arr[] = {3, 2, 5, 2, 3, 4, 3, 6, 7, 2, 4, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    countFreqGreaterThanTwo(arr, size);

    return 0;
}
