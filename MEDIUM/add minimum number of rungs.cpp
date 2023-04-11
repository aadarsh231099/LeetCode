//https://leetcode.com/problems/add-minimum-number-of-rungs/
//Add Minimum Number of Rungs
class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int res = 0, prev = 0;
        for (const auto& curr : rungs) {
            res += ceil_divide(curr - prev, dist) - 1;
            prev = curr;
        }
        return res;
    }

private:
    int ceil_divide(int a, int b) {
        return (a + (b - 1)) / b;
    }
};