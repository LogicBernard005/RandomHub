#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> V{8,-3,7,7,1,-9};
    vector<int> ans;
    int n=6;
    queue<int> qp;
    queue<int> qn;
    for(int i=0;i<n;i++){
        if(V.at(i)>=0)
        qp.push(V.at(i));
        else
        qn.push(V.at(i));
    }
    while(qp.empty() && qn.empty()){
        ans.push_back(qp.back());
        qp.pop();
        ans.push_back(qn.back());
        qn.pop();
    }
    for(int x:ans)
    cout<< x <<" ";

}