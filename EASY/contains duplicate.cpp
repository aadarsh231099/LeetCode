//https://leetcode.com/problems/contains-duplicate/
//Contains Duplicate

//Sol 1
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return unique(nums.begin(), nums.end()) != nums.end();
    }
};

// Sol 2
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        return nums.size()>s.size();
    }
};