//https://leetcode.com/problems/valid-parentheses/
//Valid Parentheses
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char, char> mappings = {{')', '('}, {']', '['}, {'}', '{'}};

        for (char c : s) {
            if (mappings.count(c)) {  // c is a closing bracket
                char top = stk.empty() ? '#' : stk.top();
                stk.pop();
                if (top != mappings[c]) {
                    return false;
                }
            } else {  // c is an opening bracket
                stk.push(c);
            }
        }

        return stk.empty();
    }
};
