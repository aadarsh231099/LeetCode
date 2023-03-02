//https://leetcode.com/problems/two-sum/
//Two Sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                v.push_back(i);
                v.push_back(m[target-nums[i]]);
                
                
            }
            else
            {
                m.insert(make_pair(nums[i],i));
            }
        }return v;
        
    }
};