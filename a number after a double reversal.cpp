//https://leetcode.com/problems/a-number-after-a-double-reversal/
//A Number After a Double Reversal
class Solution {
public:
    bool isSameAfterReversals(int num) {
        return (num == 0 || num % 10);
    }
};