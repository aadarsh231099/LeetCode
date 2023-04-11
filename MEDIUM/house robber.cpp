//https://leetcode.com/problems/house-robber/
//House Robber
class Solution {
public:
    int rob(vector<int>& nums) {
        int l=0,res=0;
        for (const auto& i:nums) {
            auto it=res;
            res=max(l+i,res);
            l=it;
        }
        return res;
    }
};