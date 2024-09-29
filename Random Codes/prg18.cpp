#include <bits/stdc++.h>
using namespace std;
bool func(int *arr, int n){
    int sum=0;
    if(n<0)
    return false;
    for(int i=0;i<n;i++){
        sum+=*(arr+i);
        if(sum==0)
        return true;
    }
    func(arr+1,n-1);
}
int main(){
    int arr[]={4, 2,3,1,6};
    cout<<func(arr,5);
}
