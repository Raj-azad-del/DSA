#include <vector>
#include <algorithm>

class Solution {
public:
    int rob(std::vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];

        auto robLinear = [&](int start, int end) {
            int rob1 = 0, rob2 = 0;
            for (int i = start; i <= end; ++i) {
                int newRob = std::max(rob2, rob1 + nums[i]);
                rob1 = rob2;
                rob2 = newRob;
            }
            return rob2;
        };
        return std::max(robLinear(0, n - 2), robLinear(1, n - 1));
    }
};