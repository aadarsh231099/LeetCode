//https://leetcode.com/problems/frog-jump-ii/
//Frog Jump II
class Solution {
public:
    int maxJump(vector<int>& stones) {
        if (size(stones)==2){
            return stones[1]-stones[0];
        }
        int res=0;
        for (int i=0;i+2<size(stones);++i) {
            res=max(res,stones[i+2]-stones[i]);
        }
        return res;
    }
};