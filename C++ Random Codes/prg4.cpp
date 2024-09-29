// This is how you can check for palindrome string in like a line or two

#include <bits/stdc++.h>
using namespace std;

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    string rev = string(input.rbegin(), input.rend());
    if(rev==input) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}
