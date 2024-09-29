#include <vector>
using namespace std;

int findXORofTwiceAppearingNumbers(std::vector<int> &nums)
{
    int result = 0;
    for (int num : nums)
    {
        result ^= num;
    }
    return result;
}

int main()
{
    std::vector<int> nums1 = {1, 2, 1, 3};
    std::vector<int> nums2 = {1, 2, 3};
    std::vector<int> nums3 = {1, 2, 2, 1};

    int result1 = findXORofTwiceAppearingNumbers(nums1);
    int result2 = findXORofTwiceAppearingNumbers(nums2);
    int result3 = findXORofTwiceAppearingNumbers(nums3);

    // Output: 1
    std::cout << "Output for nums1: " << result1 << std::endl;

    // Output: 0
    std::cout << "Output for nums2: " << result2 << std::endl;

    // Output: 3
    std::cout << "Output for nums3: " << result3 << std::endl;

    return 0;
}
