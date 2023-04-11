//https://leetcode.com/problems/next-greater-element-i/
//Next Greater Element I
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        bool f=false;
       for(int i=0;i<nums1.size();i++){
           for(int j=0;j<nums2.size();j++){
               if(nums1[i]==nums2[j]){
                   if(j==nums2.size()-1){
                       res.push_back(-1);
                   }
                   else{
                       f=false;
                       for(int k=j+1;k<nums2.size();k++){
                           if(nums2[k]>nums2[j]){
                               res.push_back(nums2[k]);
                               f=true;
                               break;
                           }
                       }
                       if(f==false){
                           res.push_back(-1);
                           break;
                       }
                   }
               }
           }
       }
    return res;
       }
};