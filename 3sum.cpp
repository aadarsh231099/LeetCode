//https://leetcode.com/problems/3sum/
//3Sum
class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        sort(begin(nums), end(nums));
        vector<vector<int>> res;
        for (int i = size(nums) - 1; i >= 2; --i) {
            if (i + 1 < size(nums) && nums[i] == nums[i + 1]) {
                continue;
            }
            const auto& target = -nums[i];
            int l = 0, r = i - 1;
            while (l < r) {
                if (nums[l] + nums[r] < target) {
                    ++l;
                } else if (nums[l] + nums[r] > target) {
                    --r;
                } else {
                    res.push_back({nums[l], nums[r], nums[i]});
                    ++l; --r;
                    while (l < r && nums[l] == nums[l - 1]) {
                        ++l;
                    }
                    while (l < r && nums[r] == nums[r + 1]) {
                        --r;
                    }
                }
            }
        }
        return res;
    }
};