//https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/
//Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
        int total = 0;
        int mi = salary[0], ma = salary[0];
        for (const auto& s : salary) {
            total += s;
            mi = min(mi, s), ma = max(ma, s);
        }
        return double(total - mi - ma) / (salary.size() - 2);
    }
};