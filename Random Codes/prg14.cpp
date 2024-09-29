#include <bits/stdc++.h>
using namespace std;
bool pallind(string& str, int i, int j){
    if(i>j)
    return true;
    if(str[i]!=str[j])
    return false;
    else
    return pallind(str, i++, j--);
}
int main(){
    string s;
    cout<<"Enter String\n";
    cin>>s;
    int l=s.length();
    if(pallind(s, 0,l-1 )==true)
    cout<<"Its a Pallindrome";
    else
    cout<<"Its not a Pallindrome";
}