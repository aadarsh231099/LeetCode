//https://leetcode.com/problems/remove-element/
//Remove Element

//Sol 1
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

//Sol 2
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[j++]=nums[i];
            }
        }
        return j;
    }
};