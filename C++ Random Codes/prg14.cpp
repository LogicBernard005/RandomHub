#include <bits/stdc++.h>
using namespace std;

class Activity
{
public:
    int st;
    int ed;
    int num;

    Activity() : st(0), ed(0), num(0) {}

    Activity(int s, int e, int n) : st(s), ed(e), num(n) {}
};

class Compare
{
public:
    bool operator()(const Activity &a, const Activity &b)
    {
        return a.ed < b.ed;
    }
};

void print_ans(int ans1, const vector<int> &ans2)
{
    cout << "No. of non-conflicting activities: " << ans1 << endl;
    cout << "List of selected activities: ";
    for (const auto &it : ans2)
    {
        cout << it << " ";
    }
    cout << endl;
}

void activity_selection(const vector<Activity> &content, int n)
{
    int ans1 = 1;
    vector<int> ans2;
    ans2.push_back(content[0].num);
    int k = 0;

    for (int i = 1; i < n; i++)
    {
        if (content[k].ed <= content[i].st)
        {
            ans1++;
            ans2.push_back(content[i].num);
            k = i;
        }
    }

    print_ans(ans1, ans2);
}

// Debugging technique to print the activities sorted as per finish time in asc.. order
void print_content(const vector<Activity> &content, int n)
{
    cout << "Activities:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << content[i].num << ") " << content[i].st << " - " << content[i].ed << endl;
    }
}

int main()
{
    int n;
    cout << "Enter number of activities: ";
    cin >> n;

    vector<Activity> content;

    vector<int> start(n);
    vector<int> finish(n);

    cout << "Enter start array" << endl;
    for (int i = 0; i < n; i++)
        cin >> start[i];

    cout << "Enter finish array" << endl;
    for (int i = 0; i < n; i++)
        cin >> finish[i];

    for (int i = 0; i < n; i++)
    {
        content.emplace_back(start[i], finish[i], i + 1);
        // emplace_back is used to directly pass
        // arguments to the constructor
    }

    sort(content.begin(), content.end(), Compare());

    print_content(content, n);

    activity_selection(content, n);

    return 0;
}
