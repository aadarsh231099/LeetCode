//https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate/
//Find Nearest Point That Has the Same X or Y Coordinate
class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int m = numeric_limits<int>::max();
        int index = -1;
        for (int i = 0; i < size(points); ++i) {
            int dx = x - points[i][0], dy = y - points[i][1];
            if (dx * dy == 0 && abs(dx) + abs(dy) < m) {
                m = abs(dx) + abs(dy);
                index = i;
            }
        }
        return index;
    }
};