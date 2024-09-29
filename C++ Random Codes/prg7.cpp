#include <vector>
#include <algorithm> // for sort
#include <numeric>   // for accumulate
#include <limits>    // for INT_MAX
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumAddedInteger(vector<int> &nums1, vector<int> &nums2)
    {
        int n1 = nums1.size();
        int n2 = nums2.size();

        // If removing two elements from nums1 doesn't leave the same number of elements as nums2, return -1
        if (n1 - 2 != n2)
        {
            return -1;
        }

        // Sort and accumulate the arrays
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int ss1 = accumulate(nums1.begin(), nums1.end(), 0);
        int ss2 = accumulate(nums2.begin(), nums2.end(), 0);

        int min_x = INT_MAX;

        // Iterate over all pairs of elements to remove from nums1
        for (int i = 0; i < n1 - 1; i++)
        {
            for (int j = i + 1; j < n1; j++)
            {
                // Remove the two elements and calculate the new sum for nums1
                int new_ss1 = ss1 - (nums1[i] + nums1[j]);

                // The required 'x' is the difference between ss2 and new_ss1
                int x = ss2 - new_ss1;

                // Create a new vector for the modified nums1 after applying 'x'
                vector<int> adjusted_nums;
                for (int k = 0; k < n1; k++)
                {
                    if (k != i && k != j)
                    {
                        adjusted_nums.push_back(nums1[k] + x);
                    }
                }

                // Sort the adjusted_nums and compare with nums2
                sort(adjusted_nums.begin(), adjusted_nums.end());
                if (equal(adjusted_nums.begin(), adjusted_nums.end(), nums2.begin()))
                {
                    min_x = min(min_x, x); // Update min_x if the condition is met
                }
            }
        }

        return (min_x == INT_MAX) ? -1 : min_x;
    }
};

int main()
{
    Solution sol;
    vector<int> nums1 = {4, 20, 16, 12, 8};
    vector<int> nums2 = {14, 18, 10};

    int result = sol.minimumAddedInteger(nums1, nums2);
    cout << "Minimum Added Integer: " << result << endl;

    return 0;
}
