#include <bits/stdc++.h>
using namespace std;

bool is_sort(int *arr, int size){
    if(size==0 || size==1)
    return true;
    if(arr[0]>arr[1])
    return false;
    return is_sort(arr+1, size-1);
}
int main(){
    int a[]={1,2,3,4,5};
    cout<< is_sort(a,5)<< endl;
}