#include <stdio.h>


int func(int arr[],int target,int fir_occ, int n){
        int start=0;
        int end=n-1;
        int mid=start+(end-start)/2;
        int ans=-1;
        while(start<=end){
            if(arr[mid]==target){
                ans=mid;
                if(fir_occ)
                end=mid-1;
                else
                start=mid+1;
            }
            else if(arr[mid]<target)
                start=mid+1;
            else 
                end=mid-1;
            mid=start+(end-start)/2;
        }
        return ans;
    }

int main(){
    int n;
    printf("Enter no.. of elements\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Elements\n");
    for(int i=0;i<n;i++) scanf("%d", &arr[i]);
    int target;
    printf("Enter Target\n");
    scanf("%d", &target);
    int first_occ = func(arr, target, 1, n);
    int last_occ = func(arr, target, 0, n);
    if(first_occ==-1 || last_occ==-1){
        printf("Zero Occurences of %d", target);
        return 0;
    }
    int occ = last_occ-first_occ+1;
    printf("%d occurs %d times", target, occ);
    return 0;
}