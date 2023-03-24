//https://leetcode.com/problems/3sum-closest/
//3Sum Closest
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(begin(nums), end(nums));
        int result = 0, min_diff = numeric_limits<int>::max();
        for (int i = size(nums) - 1; i >= 1; --i) {
            if (i + 1 < size(nums) && nums[i] == nums[i + 1]) {
                continue;
            }
            int left = 0, right = i - 1;
            while (left < right) {
                const auto& total = nums[left] + nums[right] + nums[i];
                if (total < target) {
                    ++left;
                } else if (total > target) {
                    --right;
                } else {
                    return target;
                }
                if (abs(total - target) < min_diff) {
                    min_diff = abs(total - target);
                    result = total;
                }
            }
        }
        return result;
    }
};