//https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/
//Decrypt String from Alphabet to Integer Mapping
class Solution {
public:
    string freqAlphabets(string s) {
        string str;
        for(int i =s.size()-1;i>=0;--i){
            if(s[i]=='#'){
                str+= (((s[--i]-'0')+(s[--i]-'0')*10)-1)+'a';
            }
            else{
                str+=(s[i]-'0')-1+'a';
            }
        }
        reverse(str.begin(),str.end());
        return str;
    }
};