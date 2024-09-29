#include <bits/stdc++.h>
using namespace std;
int main(){
    string s="aaabb";
     unordered_map<char,int>mp;
        char c;
        int cnt=0;
        for(auto it: s){
            mp[it]++;
            if(cnt<mp[it]){
                cnt=mp[it];
                c=it;
            }
        }
        int n = s.length();
        if(cnt>n/2)
        cout<<"";
        string ans = s;
        int idx=0;
        while(cnt--){
            ans[idx]=c;
            idx+=2;
        }
        mp[c]=0;
        for(auto it:s){
            while(mp[it]>0){
                if(idx>=n)
                idx=1;
                ans[idx]=it;
                mp[it]--;
            }
        }
        cout<<ans;
    
}