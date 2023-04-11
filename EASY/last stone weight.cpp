//https://leetcode.com/problems/last-stone-weight/
//Last Stone Weight

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> mh;
        for (const auto& x : stones) {
            mh.emplace(x);
        }
        for (int i = 0; i + 1 < stones.size(); ++i) {
            auto x = mh.top(); mh.pop();
            auto y = mh.top(); mh.pop();
            mh.emplace(abs(x - y));
        }
        return mh.top();
    }
};