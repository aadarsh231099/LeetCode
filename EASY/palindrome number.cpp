//https://leetcode.com/problems/palindrome-number/
//Palindrome Number
class Solution {
public:
    bool isPalindrome(int x) {
        long long int num=x;
        long long int s=0,r=0;
        if(x<0)return false;
        while(x!=0)
        {
            r=x%10;
            s=s*10+r;
            x=x/10;
        }
        cout<<s;
        if(num==s)
            return true;
        else
            return false;
        
    }
};