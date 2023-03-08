//https://leetcode.com/problems/container-with-most-water/
//Container With Most Water
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1, max_area = 0;
        while (i < j) {
            max_area = max(max_area, min(height[i], height[j]) * (j - i));
            if (height[i] > height[j]) {
                --j;
            } else if (height[i] < height[j]) {
                ++i;
            } else {  
                ++i, --j;
            }
        }
        return max_area;
    }
};