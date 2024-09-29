#include <stdio.h>

// Function to perform insertion sort
void insertionSort(int array[], int size);

// Function to swap two elements
void swap(int *a, int *b);

// Function to display array elements before sorting
void displayBeforeSort(int array[], int size);

// Function to display array elements after sorting
void displayAfterSort(int array[], int size);

int main() {
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    displayBeforeSort(array, size);

    insertionSort(array, size);

    displayAfterSort(array, size);

    return 0;
}

void insertionSort(int array[], int size) {
    for(int i=1;i<size;i++){
        int key = array[i];
        int j = i-1;
        while(j>=0 && array[j]>key){
            array[j+1] = array[j];
            j--;
            array[j+1] = key;
        }
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void displayBeforeSort(int array[], int size) {
    printf("Array before sorting: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void displayAfterSort(int array[], int size) {
    printf("Array after sorting: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
