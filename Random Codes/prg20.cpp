#include <bits/stdc++.h>
using namespace std;
//This code is for calculating factorials of large integers upto 1000, 
//little accuracy may be compromised here for large integers.
long double factorial(int n){
    if(n==0 || n==1)
    return 1;
    long double fact = n*factorial(n-1);
    return fact;
}
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<factorial(n)<<endl;
}