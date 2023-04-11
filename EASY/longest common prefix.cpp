//https://leetcode.com/problems/longest-common-prefix/
//Longest Common Prefix
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

        for (int i = 0; i < strs[0].length(); ++i) {
            for (const auto& str : strs) {
                if (i >= str.length() || str[i] != strs[0][i]) {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};