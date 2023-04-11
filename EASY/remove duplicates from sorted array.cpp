//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
//Remove Duplicates from Sorted Array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++)
        s.insert(nums[i]);
        int res=s.size();
        nums.clear();
        for(auto it:s)
        nums.push_back(it);
        return res;
    }
};