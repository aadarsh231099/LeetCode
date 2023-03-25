//https://leetcode.com/problems/maximum-subarray/
//Maximum Subarray
#include <bits/stdc++.h> 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = INT_MIN, maxcurr = 0;
 
    for (int i = 0; i < nums.size(); i++) {
        maxcurr = maxcurr + nums[i];
        if (max < maxcurr)
            max = maxcurr;
 
        if (maxcurr < 0)
            maxcurr = 0;
        }
        return max;
        
    }
};