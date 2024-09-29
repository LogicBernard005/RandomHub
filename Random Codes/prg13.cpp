#include <bits/stdc++.h>
using namespace std;

bool linear(int* arr, int n, int key){
   
    if(n==0)
    return false;
    if(arr[n]==key)
    return true;
    linear(arr, n-1, key);
}
int main(){
    int arr[]={3,2,5,1,6};
    cout<<linear(arr, 5,1)<<endl;
}