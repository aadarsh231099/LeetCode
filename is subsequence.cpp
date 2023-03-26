//https://leetcode.com/problems/is-subsequence/
//Is Subsequence
class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.empty()) {
            return true;
        }

        int i = 0;
        for (const auto& c : t) {
            if (c == s[i]) { 
                ++i;
            }
            if (i == s.length()) {
                break;
            }
        }
        return i == s.length();
    }
};