//https://leetcode.com/problems/pascals-triangle/
//Pascal's Triangle
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i <= numRows; i++){
            vector<int> v  = vector<int>(i, 1);
            if(i > 2){
                for(int j = 1; j <= v.size()-2; j++){
                    v[j] = ans[ans.size()-1][j-1] + ans[ans.size()-1][j];
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};