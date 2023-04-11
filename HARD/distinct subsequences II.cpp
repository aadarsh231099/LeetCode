//https://leetcode.com/problems/distinct-subsequences-ii/
//Distinct Subsequences II
class Solution {
public:
    int distinctSubseqII(string S) {
        static const int MOD = 1e9 + 7;
        vector<int> dp(26);
        int result = 0;
        for (const auto& c : S) {
            const int delta = ((result + 1) - dp[c - 'a'] + MOD) % MOD;
            tie(result, dp[c - 'a']) = pair((result + delta) % MOD, (result + 1) % MOD);
        }
        return result;
    }
};