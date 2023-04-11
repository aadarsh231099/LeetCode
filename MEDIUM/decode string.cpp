//https://leetcode.com/problems/decode-string/
//Decode String

class Solution {
public:
     string solve(string s, int &index) {
        string res; 
        while (index<s.size() && s[index]!=']')
        {
            if (!isdigit(s[index]))
                res+=s[index++];
            else 
            {
                int n=0;
                while (index < s.size() && isdigit(s[index]))
                    n=n*10+s[index++]-'0';
                index++; 
                string temp=solve(s,index);
                index++; 
                while (n--)
                    res+=temp;
            }
        }
        return res;
    }
    string decodeString(string s) {
        int index=0;
        return solve(s,index);
    }
};