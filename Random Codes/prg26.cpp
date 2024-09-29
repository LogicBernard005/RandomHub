#include <bits/stdc++.h>
using namespace std;
bool cmp(vector<int> a,vector<int> b){
    return a[1]<b[1];
}
int main(){
    vector<vector<int>> intervals{{1,3},{2,6},{0,5}};
    sort(intervals.begin(),intervals.end());
    for(auto it: intervals)
    for(auto itt: it)
    cout<<itt<<" ";
    cout<<endl;
    sort(intervals.begin(),intervals.end(),cmp);
    for(auto it: intervals)
    for(auto itt: it)
    cout<<itt<<" ";
    }