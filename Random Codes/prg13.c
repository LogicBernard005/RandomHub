#include <stdio.h>
int is_sort(int* arr, int size){
    if(size==0 || size==1)
    return 1;
    if(arr[0]>arr[1])
    return 0;
    return is_sort(arr+1, size-1);
}
void main(){
    int a[]={1,2,3,4,5};
    printf("%d", is_sort(a,5));
}