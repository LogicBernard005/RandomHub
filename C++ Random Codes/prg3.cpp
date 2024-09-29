#include <iostream>
#include <vector>

class Solution {
public:
    void threeWayPartition(std::vector<int>& array, int a, int b) {
        int n = array.size();
        int low = 0;
        int mid = 0;
        int high = n - 1;

        while (mid <= high) {
            if (array[mid] < a) {
                std::swap(array[mid], array[low]);
                mid++;
                low++;
            } else if (array[mid] > b) {
                std::swap(array[mid], array[high]);
                high--;
            } else {
                mid++;
            }
        }

        // Print the resulting array after three-way partitioning
        for (auto it : array) {
            std::cout << it << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Example usage
    Solution solution;
    std::vector<int> array = {87, 78, 16, 94};
    int a = 36;
    int b = 72;

    solution.threeWayPartition(array, a, b);

    return 0;
}
