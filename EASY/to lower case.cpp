//https://leetcode.com/problems/to-lower-case/
//To Lower Case

class Solution {
public:
    string toLowerCase(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        return s;
    }
};