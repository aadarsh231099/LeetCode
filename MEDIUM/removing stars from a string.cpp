//https://leetcode.com/problems/removing-stars-from-a-string/
//Removing Stars From a String

class Solution {
public:
     string removeStars(string s) {
        string str;
        for (char c:s)
            if (c=='*')
                str.pop_back();
            else
                str+=c;
        return str;
    }
};