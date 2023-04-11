//https://leetcode.com/problems/range-sum-query-immutable/
//Range Sum Query - Immutable

class NumArray {
public:
    vector<int>  res;
    NumArray(vector<int>& arr) {
        res.resize(arr.size()+1,0);
        for(int i=1;i<=arr.size();i++){
            res[i]+=res[i-1]+arr[i-1];
        }
    }
    
    int sumRange(int left,int right) {
        return res[right+1]-res[left];
    }
        
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->resRange(left,right);
 */