#include <bits/stdc++.h>
using namespace std;
int fibo(int x){
    if(x==0 || x==1)
    return x;
    return fibo(x-1)+fibo(x-2);
}
int main(){
    int n;
    cout<<"Input n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    cout<<fibo(i)<<" ";
}