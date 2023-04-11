//https://leetcode.com/problems/add-to-array-form-of-integer/
//Add to Array-Form of Integer
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        reverse(A.begin(), A.end());
        int c = K, i = 0;
        A[i] += c;
        c = A[i] / 10;
        A[i] %= 10;
        while (c) {
            ++i;
            if (i < A.size()) {
                A[i] += c;
            } else {
                A.emplace_back(c);
            }
            c = A[i] / 10;
            A[i] %= 10;
        }
        reverse(A.begin(), A.end());
        return A;
    }
};