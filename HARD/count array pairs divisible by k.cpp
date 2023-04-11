//https://leetcode.com/problems/count-array-pairs-divisible-by-k/
//Count Array Pairs Divisible by K

class Solution {
public:
    long long countPairs(vector<int>& nums, int k) {
        unordered_map<int64_t, int64_t> count;
        for (const auto& x:nums) {
            ++count[gcd(x,k)];
        }
        int64_t res=0;
        for (const auto& [x,c1]:count) {
            for (const auto& [y,c2]:count) {
                if (x>y||x*y%k) {
                    continue;
                }
                res+=(x!=y)?c1*c2:c1*(c1-1)/2;
            }
        }
        return res;
    }
};