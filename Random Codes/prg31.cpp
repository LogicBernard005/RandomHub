#include <bits/stdc++.h>
using namespace std;
const int N =  1e5 + 10;
int n, cows;
int positions[N];
bool predicate(int minDist){
    int lastPos = -1; //To store the last position of the cow
    int cows_ct = cows;
    for(int i=0;i<n;i++){
        if(positions[i] - lastPos >= minDist || lastPos == -1){
            cows_ct--;
            lastPos = positions[i];
        }
        if(cows_ct == 0) break;
    }
    return cows_ct == 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        cin >> n >> cows;
        for(int i = 0; i<n; i++) cin >> positions[i];
        sort(positions, positions+n);
        long long low = 0, high = 1e9, mid;
        while(high-low>1){
            mid = (high+low)>>1;
            if(predicate(mid)){
                low = mid;
            }
            else{
                high = mid-1;
            }
        }
        if(predicate(high)) cout<<high<<endl;
        else if(predicate(low)) cout<<low<<endl;
    }
    return 0;
}