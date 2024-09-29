// #include <bits/stdc++.h>
// using namespace std;

// string removeDuplicates(string s, int k)
// {
//     stack<pair<char, int>> st;
//     for (auto it : s)
//     {
//         int cnt = 1;
//         if (!st.empty() && it == st.top().first)
//             cnt = st.top().second + 1;
//         st.push({it, cnt});
//         if (cnt == k)
//         {
//             while (cnt)
//             {
//                 st.pop();
//                 cnt--;
//             }
//         }
//     }
//     string output = "";
//     while (!st.empty())
//         output += st.top().first;
//     reverse(output.begin(), output.end());
//     return output;
// }

// int main()
// {
//     // string s = "abcd";
//     string ans = removeDuplicates("abcd", 2);
//     cout << ans << endl;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    int m;
    int i;
    int row = (m - 1) - (((m * n - 1) - i) / n);
    int col = (n - 1) - (((m * n - 1) - i) / n);
}