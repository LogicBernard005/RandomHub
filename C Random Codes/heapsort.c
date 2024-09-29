#include <stdio.h>

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
    return;
}

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < n && arr[largest] < arr[left]) {
        largest = left;
    }
            
    if(right < n && arr[largest] < arr[right]) {
        largest = right;
    }

    if(largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int size) {
    while(size > 1) {
        swap(&arr[0], &arr[size-1]);

        size--;
        
        heapify(arr, size, 0);
    }
}

int main() {
    // int arr[6] = {-1, 54, 53, 55, 50, 52};
    // int size = 5;

    int size;
    printf("\n Enter size: ");
    scanf("%d", &size);

    int arr[size];
    printf("\n Enter Array: ");
    for(int i=0;i<size;i++)
        scanf("%d", &arr[i]);


    
    // Heap creation
    for(int i = size/2-1; i>=0; i--) {
        heapify(arr, size, i);
    }
    
    printf("Unsorted Array: ");
    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Calling heap sort
    heapSort(arr, size);

    printf("Sorted array (Heap Sort): ");
    for(int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}