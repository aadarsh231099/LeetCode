//https://leetcode.com/problems/profitable-schemes/
//Profitable Schemes

#define ll long long
#define M 1000000007
class Solution {
public:
    vector<vector<vector<ll>>> f;
    vector<int> group;
    vector<int> profit;
    
    ll dp(ll k, ll p, ll g) {
        if (!k) return p <= 0;
        if (p < 0) p = 0;
        if (f[k][p][g] != INT_MIN) return f[k][p][g];
        ll result = dp(k - 1, p, g);
        if (g >= group[k - 1]) {
            result += dp(k - 1, p - profit[k - 1], g - group[k - 1]);
        }
        result %= M;
        f[k][p][g] = result;
        return result;
    }
    
    int profitableSchemes(int G, int P, vector<int>& group_, vector<int>& profit_) {
        group = group_;
        profit = profit_;
        int len = group.size();
        f = vector<vector<vector<ll>>>(len + 1, vector<vector<ll>>(P + 1, vector<ll>(G + 1, INT_MIN)));
        return dp(len, P, G) % M;
    }
};