//https://leetcode.com/problems/kth-largest-element-in-an-array/
//Kth Largest Element in an Array
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        nth_element(nums.begin(), next(nums.begin(), k - 1), nums.end(), greater<int>());
        return *next(nums.begin(), k - 1);
    }
};