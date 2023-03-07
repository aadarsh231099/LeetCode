//https://leetcode.com/problems/jewels-and-stones/
//Jewels and Stones
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set<char> lookup;
        for (const auto& j : J) {
            lookup.emplace(j);
        }
        int result = 0;
        for (const auto& s : S) {
            result += lookup.count(s);
        }
        return result;
    }
};