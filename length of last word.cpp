//https://leetcode.com/problems/length-of-last-word/
//Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        const auto is_space = [](const char c) { return isspace(c); };
        const auto it = find_if_not(s.rbegin(), s.rend(), is_space);
        const auto jt = find_if(it, s.rend(), is_space);
        return distance(it, jt);
    }
};