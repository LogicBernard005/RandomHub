#include <stdio.h>
int printCommon(int arr1[], int len1, int arr2[],int len2) {
int i,j;
for(i = 0; i < len1 ;i++) {
for(j = 0; j < len2 ;j++) {
if(arr1[i] == arr2[j]){
printf("\n Common elements is %d", arr1[i]);
}
}
} 
}
int main(void) {
int arr1[] = {2,3,4,5,6};
int arr2[] = {4,6,7,8};
// Lenght of arr1 and arr2
int len1 = 5;
int len2 = 4;
printCommon(arr1,len1,arr2,len2);
return 0;
}