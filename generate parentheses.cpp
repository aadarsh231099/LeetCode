//https://leetcode.com/problems/generate-parentheses/
//Generate Parentheses
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string curr;
        generateParenthesisRecu(n, n, &curr, &result);
        return result;
    }

private:
    void generateParenthesisRecu(int left, int right, string *curr, vector<string> *result) {
        if (left == 0 && right == 0) {
            result->emplace_back(*curr);
        }
        if (left > 0) {
            curr->push_back('(');
            generateParenthesisRecu(left - 1, right, curr, result);
            curr->pop_back();
        }
        if (left < right) {
            curr->push_back(')');
            generateParenthesisRecu(left, right - 1, curr, result);
            curr->pop_back();
        }
    }
};