#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {12,6,1,2,7};
    int ans = 0;
        int n = nums.size();
        int i=0,j=i+1,k=n-1;
        // for(int i=0;i<k;i++){
        //     j=i+1;
        //     while(j<k){
        //         if(((nums[i]-nums[j])*nums[k])>ans) ans = (nums[i]-nums[j])*nums[k];
        //     }
        //     k--;
        // }
        cout<<"Hello Ji";
        // return (ans==0)?-1:ans;
        if(ans==0) cout<<-1;
        else cout<<ans;    
    return 0;
}