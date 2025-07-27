//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
//Best Time to Buy and Sell Stock

//Sol1
class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if (prices.empty()) {
            return 0;
        }

        int h1 = numeric_limits<int>::min();
        int r1 = numeric_limits<int>::min();

        for (const auto& p : prices) {
            h1 = max(h1, -p);
            r1 = max(r1, h1 + p);
        }

        return r1;
    }
};

//Sol2
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int profit = 0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }
            else if(profit<prices[i]-min){
                profit = prices[i]-min;
            }
        }
        return profit;
    }
};