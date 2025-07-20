//https://leetcode.com/problems/majority-element/description/
//169. Majority Element

//Sol1
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return (nums[nums.size()/2]);
    }
};

//Sol2
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int num:nums){
            m[num]++;
            if(m[num]>(nums.size()/2)){
            return num;
            }
        }
        return -1;
    }
};