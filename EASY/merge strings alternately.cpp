//https://leetcode.com/problems/merge-strings-alternately/
//Merge Strings Alternately
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m=min(word1.size(), word2.size());
        string res="";
        for(int i=0; i<m; i++){
            res+=word1[i];
            res+=word2[i];
        }
        for(int i=m; i<word1.size(); i++){
            res+=word1[i];
        }
        for(int i=m; i<word2.size(); i++){
            res+=word2[i];
        }
        return res;
    }
};