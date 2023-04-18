//https://leetcode.com/problems/remove-element/
//Remove Element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n{};
        for(int i{};i<nums.size();i++){
            if(nums[i]== val){
                n++;
                nums[i] = '51';
            }       
        }
        sort(nums.begin(),nums.end());
            return nums.size()-n;
    }
};