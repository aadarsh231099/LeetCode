//https://leetcode.com/problems/bulls-and-cows/
//Bulls and Cows

class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char, int> mp;
        int c1=0,c2=0;
        for (int i=0;i<size(secret);++i) {
            const char sec=secret[i];
            const char gue=guess[i];
            if (sec==gue) {
                ++c1;
            } else {
                c2+=int(mp[sec]++<0)+int(mp[gue]-->0);
             }
        }
        return to_string(c1).append("A").append(to_string(c2)).append("B");
    }
};