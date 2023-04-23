//https://leetcode.com/problems/restore-the-array/
//Restore The Array

class Solution {
public:
    long prefix[16],nxt,ans,mod=1e9+7,tmp=0,ba=1;
    int numberOfArrays(string s, int k) { 
        for(int i=s.size()-1,r=i;i>=0;--i){
            tmp+=(s[i]-'0')*ba;
            ba*=10;
            if(ba>1e15)return 0;
            while(tmp>k){
                r--;
                tmp/=10;
                ba/=10;
            }
            nxt=r-i+1;
            if(s[i]=='0')ans=0;
            else if(i+nxt==s.size())ans=1+prefix[(i+1)%16];
            else ans=prefix[(i+1)%16]-prefix[(i+nxt+1)%16]+mod;
            ans%=mod;
            prefix[i%16]=(prefix[(i+1)%16]+ans)%mod;
        }
        return ans;
    }
};