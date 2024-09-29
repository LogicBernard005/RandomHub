#include <bits/stdc++.h>
using namespace std;

int reverse(int n){
    int nn = 0;
    while(n){
        nn = (nn*10) + n%10;
        n = n/10;
    }
    return nn;
}

int main()
{
    int n = 45533;
    n = reverse(n);
    cout<<n<<endl;
    return 0;
}