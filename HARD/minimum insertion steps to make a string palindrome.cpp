//https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/
//Minimum Insertion Steps to Make a String Palindrome

class Solution {
public:
    int minInsertions(string s1) {
        int n = s1.size();
        int DP[n+1][n+1];
        string s2  =s1;
        reverse(s1.begin(),s1.end());
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(i==0 || j==0){
                    DP[i][j] = 0;
                }
                else if(s1[i-1]==s2[j-1]){
                    DP[i][j] = DP[i-1][j-1]+1;
                }
                else{
                    DP[i][j] = max(DP[i-1][j],DP[i][j-1]);
                }
            }
        }
        return n-DP[n][n];
    }
};