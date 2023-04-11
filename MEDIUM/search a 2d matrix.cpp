//https://leetcode.com/problems/search-a-2d-matrix/
//Search a 2D Matrix
class Solution {
public:
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int low = 0;
        int high = row*col -1;
        int mid;
        while(low<=high)
        {
            mid = low + (high-low)/2;
            if(matrix[mid/col][mid%col] == target) return true;
            else if(matrix[mid/col][mid%col] < target) low = mid+1;
            else high = mid - 1;
        }
        return false;
    }
};