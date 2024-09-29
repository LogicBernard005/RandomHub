#include <bits/stdc++.h>
using namespace std;
int main(){
    int inv=0;
    int arr[]={5,4,3,2,1,9,8,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(arr[i]>arr[j] && i<j)
        inv++;}
    }
    cout<<inv;
}