//https://leetcode.com/problems/sum-of-all-odd-length-subarrays/
//Sum of All Odd Length Subarrays
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            int l = i, r = n - i - 1;
            ans += arr[i] * (l / 2 + 1) * (r / 2 + 1);
            ans += arr[i] * ((l + 1) / 2) * ((r + 1) / 2);
        }
        return ans;
    }
};