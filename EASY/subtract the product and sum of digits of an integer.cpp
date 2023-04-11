//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
//Subtract the Product and Sum of Digits of an Integer
class Solution {
public:

    int subtractProductAndSum(int n) {
        int r=0,p=1,s=0;
        while(n)
        {
            r=n%10;
            p*=r;
            s+=r;
            n/=10;
        }
        return p-s;
    }
};