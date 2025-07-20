//https://leetcode.com/problems/concatenation-of-array/description/
//1929. Concatenation of Array
//Sol 1
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
    vector<int> ans = nums;
    ans.insert(ans.end(), nums.begin(), nums.end()); 
    return ans;
    }
};

//Sol 2
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(2*nums.size());
        for(int i=0;i<nums.size();i++){
            ans[i] = nums[i];
            ans[i+nums.size()] = nums[i];
        }
        return ans;
    }
};