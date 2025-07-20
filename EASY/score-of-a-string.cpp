// https://leetcode.com/problems/score-of-a-string/description/
// 3110. Score of a String

class Solution {
public:
    int scoreOfString(string s) {
        int res = 0;
        for(int i=0;i<s.size()-1;i++)
        {
            res += abs((int)s[i]-(int)s[i+1]);
        }
        return res;
    }
};