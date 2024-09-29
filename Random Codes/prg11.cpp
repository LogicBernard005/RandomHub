#include <bits/stdc++.h>
using namespace std;
void sort(int *arr, int size){
    int temp;
    if(size==0)
    return;
    for(int i=0;i<5;i++){
    if(arr[i]>arr[i+1]){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }}
    sort(arr, size-1);
    
}
int main(){
    int a[]={1,4,2,2,1};
    sort(a, 5);
    for(int i=0;i<5;i++)
    cout<<a[i]<<" ";
}