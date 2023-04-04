//https://leetcode.com/problems/optimal-partition-of-string/
//Optimal Partition of String

class Solution {
public:
    int partitionString(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        int res=1;
        for(int i=0;i<n;i++){
            if(mp.count(s[i])){
                res++;
                mp.clear();
            }
            mp[s[i]]=i;
        }
        return res;
    }
};