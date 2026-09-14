class Solution {
public:
    int solve(vector<int>& coins, int amount, int sum, int index, vector<vector<int>>& dp) {
        if(sum == amount)
            return 1;
        if(sum > amount || index >= coins.size())
            return 0;
        if(dp[index][sum] != -1)
            return dp[index][sum];
        return dp[index][sum] =
            solve(coins, amount, sum + coins[index], index, dp) +
            solve(coins, amount, sum, index + 1, dp);
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size(), vector<int>(amount + 1, -1));
        return solve(coins, amount, 0, 0, dp);
    }
};