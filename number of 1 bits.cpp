//https://leetcode.com/problems/number-of-1-bits/
//Number of 1 Bits
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c = 0;
        while(n != 0){
            c += (n%2);
            n >>= 1;
        }
        return c;
    }
};