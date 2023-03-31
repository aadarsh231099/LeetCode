//https://leetcode.com/problems/richest-customer-wealth/
//Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0; 
        for(auto it : accounts) 
        ans=max(ans,accumulate(it.begin(),it.end(),0)); 
        return ans;   
    }
};