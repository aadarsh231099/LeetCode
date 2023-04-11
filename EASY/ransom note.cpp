//https://leetcode.com/problems/ransom-note/
//Ransome Note
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int counter[26] = {0};
        for(char ch : magazine)
            counter[ch - 'a']++;
        for(char ch : ransomNote)
            if(counter[ch - 'a']-- <= 0)
                return false;
        return true;       
    }
};