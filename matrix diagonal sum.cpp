//https://leetcode.com/problems/matrix-diagonal-sum/
//Matrix Diagonal Sum
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int len = mat.size(),s=0;
        for(int i=0;i<len;i++){
            s += mat[i][i]+mat[i][len-i-1];
        }
        if(len%2){
            s-=mat[len/2][len/2];
        }
        return s;
    }
};