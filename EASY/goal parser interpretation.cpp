//https://leetcode.com/problems/goal-parser-interpretation/
//Goal Parser Interpretation
class Solution {
public:
    string interpret(string command) {
        string res;
        for (int i = 0; i < size(command);) {
            if (command[i] == 'G') {
                res += 'G', ++i;
            } else if (command[i + 1] == ')') {
                res += 'o', i += 2;
            } else {
                res += "al", i += 4;
            }
        }
        return res;
    }
};
