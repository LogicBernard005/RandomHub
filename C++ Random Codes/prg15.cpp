#include <bits/stdc++.h>
using namespace std;

int find_majority(const vector<int> &arr)
{
    int candidate = -1;
    int cnt = 0;

    for (int num : arr)
    {
        if (cnt == 0)
        {
            candidate = num;
            cnt = 1;
        }
        else if (num == candidate)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }

    cnt = 0;
    for (int it : arr)
    {
        if (it == candidate)
        {
            cnt++;
        }
    }

    if (cnt > arr.size() / 2)
    {
        return candidate;
    }

    return -1;
}

double find_median(vector<int> arr)
{
    std::sort(arr.begin(), arr.end());

    int n = arr.size();
    if (n % 2 == 0)
    {
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    }
    else
    {
        return arr[n / 2];
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int majority = find_majority(arr);
    double median = find_median(arr);

    if (majority != -1)
    {
        cout << "Majority element: " << majority << endl;
    }
    else
    {
        cout << "No majority element found." << endl;
    }

    cout << "Median of the array: " << median << endl;

    return 0;
}
