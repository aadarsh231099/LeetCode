//https://leetcode.com/problems/four-divisors/
//Four Divisors
class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int res = 0;
        for (const auto& num : nums) {
            vector<int> fac;
            for (int i = 1; i * i <= num; ++i) {
                if (num % i) {
                    continue;
                }
                fac.emplace_back(i);
                if (i != num / i) {
                    fac.emplace_back(num / i);
                    if (fac.size() > 4) {
                        break;
                    }
                }
            }
            if (fac.size() == 4) {
                res += accumulate(cbegin(fac), cend(fac), 0);
            } 
        }
        return res;
    }
};