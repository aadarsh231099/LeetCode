//https://leetcode.com/problems/verifying-an-alien-dictionary/
//Verifying an Alien Dictionary

class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map <char,int> mp;
        for(int i=0;i<order.length();i++){
            mp[order[i]]=i;
        }
        for(int i=1;i<words.size();i++){
            int f=0;
            for(int j=0;j<min(words[i].length(),words[i-1].length());j++){
                if(mp[words[i-1][j]]<mp[words[i][j]]) break;
                if(mp[words[i-1][j]]>mp[words[i][j]]) return false;
                f++;
                if((f==words[i].length()) && words[i-1].length()!=words[i].length()) return false;
            }
        }
        return true;
    }
};