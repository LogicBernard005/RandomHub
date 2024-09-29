#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> operations = {"1 97", "2", "1 20", "2", "1 26", "1 20", "2", "3", "1 91", "3"};
    int n = operations.size();
    vector<int> ans;
    stack<int> st;
    stack<int> m_st;
    for(auto&& it: operations){
        if(it=="2" && !st.empty() && !m_st.empty()){
            st.pop();
            m_st.pop();
        } 
        else if(it=="3" && !m_st.empty()) ans.push_back(m_st.top());
        else{
            string s = it.substr(1);
            int num = stoll(s);
            if((!m_st.empty() && num>m_st.top()) || m_st.empty()) m_st.push(num);
            st.push(num);
        }
    }
    if(!m_st.empty()){
        ans.push_back(m_st.top());
        m_st.pop();
    }
    for(int i= 0;i<ans.size();i++) cout<<ans[i]<<" ";
}