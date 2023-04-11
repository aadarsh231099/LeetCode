//https://leetcode.com/problems/jump-game/
//Jump Game
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int r = 0;
        for (int i = 0; i <= r && i < nums.size(); ++i) {
            r= max(r, i + nums[i]);
        }
        return r >= nums.size() - 1;
    }
};