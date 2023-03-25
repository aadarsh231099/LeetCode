//https://leetcode.com/problems/combination-sum-ii/
//Combination Sum II
class Solution {
    public:
        vector<vector<int> > combinationSum2(vector<int> &num, int target) {
            sort(num.begin(), num.end());
            vector<vector<int> > ans;
            vector<int> v;
            dfs(num, target, 0, v, ans);
            return ans;
        }

    private:
        void dfs(vector<int>& num, int gap, int begin, vector<int>& v,vector<vector<int> > &ans) {
            if (gap == 0) {
                ans.push_back(v);
                return;
            }

            for (size_t i = begin; i < num.size(); i++) {
                if (gap < num[i]) return; 
                if( i > begin && num[i] == num[i - 1]) 
                    continue;
                v.push_back(num[i]);
                dfs(num, gap - num[i], i + 1, v, ans); 
                v.pop_back();
            }
        }
};