#include <stdio.h>
#include <stdlib.h>

void swap(int &a, int &b){
    int t = a;
    a = b;
    b = t;
    return;
}

void before_sort(int **arr[], int n){
    printf("\n Before Sort: ");
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void after_sort(int **arr[], int n){
    printf("\n After Sort: ");
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void bubble(int **arr[], int n){
    for(int i=0;i<n;i++){
        int flag = 0;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
                flag = 1;
            }
        }
        if(flag==0) return;
    } 
}

void selection(int **arr[], int n){
    for(int i=0;i<n-1;i++){
        int minI = i;
        for(int j=i+1;j<n;j++){
            if(arr[minI]>arr[j])
                minI = j;
        }
        swap(arr[minI], arr[i]);
    }
}

void insertion(int **arr[], int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
            arr[j+1] = key;
        }
    }
}

void merge(int **arr[], int s, int e){
    int mid = s + (e-s)/2;
    int l1 = mid-s+1;
    int l2 = e-mid;
    int first[l1];
    int second[l2];
    int mainI = s;
    for(int i=0;i<l1;i++){
        first[i] = arr[mainI++];
    }
    mainI = mid+1;
    for(int i=0;i<l2;i++){
        second[i] = arr[mainI++];
    }
    mainI = s;
    int ind1 = 0;
    int ind2 = 0;
    while(ind1<l1 && ind2<l2){
        if(first[ind1]<second[ind2])
            arr[mainI++] = first[ind1++];
        else 
            arr[mainI++] = second[ind2++];
    }
    while(ind1<l1)
        arr[mainI++] = first[ind1++];
    while(ind2<l2)
        arr[mainI++] = second[ind2++];
}

void merge_sort(int **arr[], int s, int e){
    if(s>=e) return;
    int mid = s + (e-s)/2;
    merge_sort(arr, s, mid);
    merge_sort(arr, mid+1, e);
    merge(arr, s, e);
}

int partition(int **arr[], int s, int e){
    int pivotIndex;
    int pivot = arr[s];
    int cnt = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot)
            cnt++;
    }
    pivotIndex = s + cnt;
    swap(arr[s], arr[pivotIndex]);
    int i = s;
    int j = e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot) i++;
        while(arr[j]>pivot) j--;
        if(i<pivotIndex && j>pivotIndex) swap(&arr[i++], &arr[j--]);
    }
    return pivotIndex;
}

void quicksort(int **arr[], int s, int e){
    if(s>=e) return;
    int p = partition(&arr, s, e);
    quicksort(&arr, s, p-1);
    quicksort(&arr, p+1, p);

}

int menu(){
    int ch;
    printf("\n Enter Choice: ");
    printf("\n 1 - Bubble Sort");
    printf("\n 2 - Selection Sort");
    printf("\n 3 - Insertion Sort");
    printf("\n 4 - Merge Sort");
    printf("\n 5 - Quick Sort");
    scanf("%d", &ch);
    return ch;
}

void main(){
    int n;
    printf("Enter n \n");
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d", &arr[i]);

    before_sort(&arr, n);
    int ch = menu();

    switch(ch){
        case 1: 
            bubble(&arr, n);
            break;
        case 2:
            selection(&arr, n);
            break;
        case 3: 
            insertion(&arr, n);
            break;
        case 4: 
            merge(&arr, 0, n-1);
            break;
        case 5: 
            merge(&arr, 0, n-1);
            break;
        default: exit(0);
    }
    after_sort(&arr, n);
}