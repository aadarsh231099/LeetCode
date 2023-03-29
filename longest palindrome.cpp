//https://leetcode.com/problems/longest-palindrome/
//Longest Palindrome
class Solution {
public:
    int longestPalindrome(string s) {
        int c = 0;
        unordered_map<char, int> m;
        for(char ch : s) {
            m[ch]++;
            if (m[ch] % 2 == 1)
                c++;
            else    
                c--;
        }
        if (c > 1)
            return s.length() - c + 1;
        return s.length();
    }
};