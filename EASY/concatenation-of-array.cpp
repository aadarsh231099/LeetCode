//https://leetcode.com/problems/concatenation-of-array/description/
//1929. Concatenation of Array
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
    vector<int> ans = nums;
    ans.insert(ans.end(), nums.begin(), nums.end()); 
    return ans;
    }
};