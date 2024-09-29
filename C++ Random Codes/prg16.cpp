#include <bits/stdc++.h>
using namespace std;

struct Job
{
    int id;
    int dead;
    int profit;

    Job() : id(0), dead(0), profit(0){};

    Job(int i, int d, int p) : id(i), dead(d), profit(p){};
};

class Compare
{
public:
    bool operator()(const Job &a, const Job &b)
    {
        return a.profit > b.profit;
    }
};

void print_ans(int cnt, int mool)
{
    cout << "Maximum Number of Jobs: " << cnt << endl;
    cout << "Maximum Profit: " << mool << endl;
    return;
}

void JobScheduling(Job arr[], int n)
{
    vector<int> slots(n, -1);
    int mool(0);
    int cnt(0);
    sort(arr, arr + n, Compare());
    for (int i = 0; i < n; i++)
    {
        int where = arr[i].dead;
        where--;
        while (slots[where] != -1 && where >= 0)
        {
            where--;
        }
        if (where >= 0)
            slots[where] = 1;
        if (slots[where] == 1)
        {
            cnt++;
            mool += arr[i].profit;
        }
    }
    print_ans(cnt, mool);
    return;
}

int main()
{
    int n;
    cout << "Enter the number of jobs" << endl;
    cin >> n;
    Job arr[n];
    cout << "Enter Job ID, Deadline and Profit associated with n jobs: " << endl;
    for (int i = 0; i < n; i++)
    {
        int num;
        int deadline;
        int pf;
        cin >> num >> deadline >> pf;
        arr[i] = Job(num, deadline, pf);
    }
    JobScheduling(arr, n);
    return 0;
}