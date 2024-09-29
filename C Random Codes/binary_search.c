#include <stdio.h>

void main(){
    int arr[10];
    printf("Enter Array\n");
    for(int i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter element to be searched\n");
    scanf("%d", &target);
    int low =0;
    int high = 9;
    while(high-low>1){
        int mid = low + (high-low)/2;
        // printf("mid = %d\n", mid);
        if(arr[mid]<target) low = mid+1;
        else high = mid;
    }
    // printf("high = %d\n", high);
    // printf("low = %d\n", low);
    if(arr[high]==target) printf("Found at index %d", high);
    else if(arr[low]==target) printf("Found at index %d", low);
    else printf("Not Found\n");
    return;
}