//https://leetcode.com/problems/k-similar-strings/
//K-Similar Strings
class Solution {
public:
    int kSimilarity(string A, string B) {
        queue<string> q;
        unordered_set<string> set;

        set.emplace(A);
        q.emplace(A);
        int res = 0;
        while (!q.empty()) {
            for (int size = q.size() - 1; size >= 0; --size) {
                auto s = q.front(); q.pop();
                if (s == B) {
                    return res;
                }
                int i;
                for (i = 0; s[i] == B[i]; ++i);
                for (int j = i + 1; j < s.length(); ++j){
                    if (s[j] == B[j] || s[i] != B[j]) {
                        continue;
                    }
                    swap(s[i], s[j]);
                    if (!set.count(s)) {
                        set.emplace(s);
                        q.emplace(s);
                    }
                    swap(s[i], s[j]);
                }
            }
            ++res;
        }
        return res;
    }
};