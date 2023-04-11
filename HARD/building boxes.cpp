//https://leetcode.com/problems/building-boxes/
//Building Boxes
class Solution {
public:
    int minimumBoxes(int n) {
        int h = pow(6.0 * n, 1.0 / 3);
        if (int64_t(h) * (h + 1) * (h + 2) / 6 > n) {
            --h;
        }
        n -= int64_t(h) * (h + 1) * (h + 2) / 6;
        int d = ceil((-1 + sqrt(1 + 8 * n)) / 2);
        return h * (h + 1) / 2 + d;
    }
};