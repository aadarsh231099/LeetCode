//https://leetcode.com/problems/number-of-ways-to-form-a-target-string-given-a-dictionary/
//Number of Ways to Form a Target String Given a Dictionary

class Solution {
public:

    int MOD=1e9+7;
    int numWays(vector<string>& words,string target) {
        int n=words.size();
        int m=words[0].size();
        int k=target.size();
        vector<vector<int>> freq(m,vector<int>(26));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                freq[i][words[j][i]-'a']++;
            }
        }
        vector<int> prev(k+1),curr(k+1);
        prev[0]=curr[0]=1;
        for(int ind=1;ind<=m;ind++){
            for(int len=1;len<=k;len++){
                long long res=prev[len];
                res=(res+1ll*prev[len-1]*freq[ind-1][target[len-1]-'a'])%MOD;
                curr[len]=res;
            }
            prev=curr;
        }
        return prev[k];
    }
};