//https://leetcode.com/problems/reshape-the-matrix/
//Reshape the Matrix
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int m = nums.size(), n = nums[0].size();
        if(m * n != r * c) return nums;
        vector<vector<int>> ans(r, vector<int>(c));
        int row = 0, col = 0;
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                ans[i][j] = nums[row][col++];
                if(col == n) col = 0, row++;
            }
        }
        return ans;
    }
};