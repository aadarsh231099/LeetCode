//https://leetcode.com/problems/backspace-string-compare/
//Backspace String Compare

class Solution {
public:    
    string getString(string &str) {
        int n=str.length(),c=0;
        string result="";
        for(int i=n-1;i>=0;i--) {
            char ch=str[i];
            if(ch=='#') 
                c++;
            else {
                if(c>0)
                    c--;
                else {
                    result+=ch;
                }                     
            }
        }
        return result;        
    }
    
    bool backspaceCompare(string S, string T) {
        return getString(S)==getString(T);
    }
};