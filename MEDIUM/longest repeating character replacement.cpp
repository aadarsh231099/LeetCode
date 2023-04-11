//https://leetcode.com/problems/longest-repeating-character-replacement/
//Longest Repeating Character Replacement

class Solution {
public:
    int characterReplacement(string s, int k) {
        int len=s.length(),res = 0;
        vector<int> ch(26, 0);
        int l=0,r=0,freq=0; 
        for(;r<len;r++){
            ch[s[r]-'A']+=1;
            freq=max(freq,ch[s[r]-'A']);
            if((r-l+1)-freq>k) {
                res=max(res,(r-l));
                ch[s[l]-'A']-=1;
                l+=1;
                freq=*(max_element(ch.begin(),ch.end()));
            }
        }
        return max(res, r-l);
    }
};