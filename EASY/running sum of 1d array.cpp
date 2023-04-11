//https://leetcode.com/problems/running-sum-of-1d-array/
//Running Sum of 1d Array
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++)
        {
            nums[i]+=nums[i-1];
        }
        return nums;
    }
};