//https://leetcode.com/problems/sign-of-the-product-of-an-array/
//Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long int ans=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0){
                ans *= 1;
            }
            else if(nums[i] < 0){
                ans *= -1;
            }else{
                ans *= 0;
            }
        }
        if(ans==0){
            return 0;
        }
        if(ans>0){
            return 1;
        }
        else{
            return -1;
        }
        
    }
};