//https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/
//Check if One String Swap Can Make Strings Equal
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<pair<int, int>> d;
        for (int i = 0; i < size(s1); ++i) {
            if (s1[i] == s2[i]) {
                continue;
            }
            if (size(d) == 2) {
                return false;
            }
            d.emplace_back(empty(d) ? pair(s1[i], s2[i]) : pair(s2[i], s1[i]));
        }
        return empty(d) || (size(d) == 2 && d[0] == d[1]);
    }
};