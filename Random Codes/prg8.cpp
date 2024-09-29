#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int> s1;
    set<int> s2;
    set<int> result;
    int n;
    cout<<"Input n"<<endl;
    cin>>n;
    pair<int,int>arr[n];
    cout<<"Input Array of Pair"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i].first;
        cin>>arr[i].second;
        // for(int j=arr[i].first;j<=arr[i].second;j++)
        //     s.insert(j);
        // for(int k=arr[i+1].first;j<=arr[i+1].second;k++)
        //     s.insert(k);
    }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //          for(int k=arr[i].first; k<=arr[i].second; k++)
    //           s1.insert(k);
    //          for(int k=arr[j].first;k<=arr[j].second;k++)
    //           s2.insert(k);
    //     }
    // }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            set_intersection(arr[i].first,arr[i].second,arr[j].first,arr[j].second,inserter(result,result.end));
             result.empty();
        }
    }
   
 
}