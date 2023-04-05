//https://leetcode.com/problems/minimize-maximum-of-array/
//Minimize Maximum of Array

class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long long sum=0,ans=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            long long res=(sum+i)/(i+1);
            ans=max(ans,res);
        }
        return ans;
    }
};