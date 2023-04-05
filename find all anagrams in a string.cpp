//https://leetcode.com/problems/find-all-anagrams-in-a-string/
//Find All Anagrams in a String

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> res,mp1(26,0),mp2(26,0);
        int n=s.size(),m=p.size();
        if(m>n) 
            return res;
        int r=0;
        int l=0;
        while(r<m)
        {
            mp1[s[r]-'a']++;
            mp2[p[r]-'a']++;
            r++;
        }
        r--;
        while(r<n)
        {
            r++;
            if(mp1==mp2) 
                res.push_back(l);
            if(r!=n)
                mp1[s[r]-'a']++;
            mp1[s[l]-'a']--;
            l++;

        }
        return res;     
    }
};