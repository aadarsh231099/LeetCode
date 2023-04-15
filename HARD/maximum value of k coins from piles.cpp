//https://leetcode.com/problems/maximum-value-of-k-coins-from-piles/
//Maximum Value of K Coins From Piles

class Solution {
public:
    int maxValueOfCoins(const vector<vector<int>>& piles, int k) {
        int n=piles.size();
        vector<vector<optional<int>>> mc(n, vector<optional<int>>(k+1,optional<int>()));
        function<int(int, int)>f=[&](int index,int rest) {
            if (rest==0) return 0;
            if (index==n) return 0;
            optional<int>& v=mc[index][rest];
            if (!v) {
                v=f(index+1,rest);
                int sum=0;
                for (int i=0;i<min(rest,(int)piles[index].size());++i) {
                    sum+=piles[index][i];
                    v=max(*v,sum+f(index+1,rest-i-1));
                }
            }
            return v.value();
        };
       return f(0, k);
    }
};