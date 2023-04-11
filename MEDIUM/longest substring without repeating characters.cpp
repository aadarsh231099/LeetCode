//https://leetcode.com/problems/longest-substring-without-repeating-characters/
//Longest Substring Without Repeating Characters
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_set<char> str;
        int len = 0, i = 0, j = 0;
        while (i < n && j < n) {
            if (str.find(s[j]) == str.end()) {
                str.insert(s[j++]);
                len = max(len, j - i);
            } else {
                str.erase(s[i++]);
            }
        }
        return len;
        
    }
};