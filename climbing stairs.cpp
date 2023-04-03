//https://leetcode.com/problems/climbing-stairs/
//Climbing Stairs

class Solution {
public:
    int climbStairs(int n) {
        vector<int> h(3, 0);
        h[0] = 1;
        h[1] = 1;
        for (int i = 2; i <= n; ++i) {
            h[i % 3] = h[(i - 1) % 3] + h[(i - 2) % 3];
        }
        return h[n % 3];
    }
};