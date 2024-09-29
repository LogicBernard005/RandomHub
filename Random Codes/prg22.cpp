#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,-4,1,6,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    }