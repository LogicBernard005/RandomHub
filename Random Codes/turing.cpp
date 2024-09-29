#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<INT_MAX<<endl;
    int i;
    cout << "Press Enter to Continue";
    cin.ignore();
    cout<<"Turing Test Begins:- "<<endl;
    cout<<"Computing..."<<endl;
    while(i<=INT_MAX){
        if(i%6666666==0) cout<<"Still Computing..."<<i<<endl;
        i++;
    }
    cout<<"For i ="<<i<<" Turing Complete is achieved"<<endl;
    return 0;
}