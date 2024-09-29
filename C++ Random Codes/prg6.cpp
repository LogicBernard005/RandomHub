#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello";
    int score(0);
    for (int i = 1; i < s.size(); i++)
        score += s[i] - s[i - 1];
    cout << score << endl;
    return 0;
    // return score;
}