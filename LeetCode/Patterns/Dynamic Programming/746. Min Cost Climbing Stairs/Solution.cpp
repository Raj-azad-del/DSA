class Solution {
public:
    int usingdp(int n, vector<int>& cost, vector<int>& dp) {
        if(n >= cost.size())
            return 0;
        if(dp[n] != -1)
            return dp[n];
        dp[n] = cost[n] + min(usingdp(n + 1, cost, dp),usingdp(n + 2, cost, dp));
        return dp[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size(), -1);
        return min(usingdp(0, cost, dp),usingdp(1, cost, dp));
    }
};