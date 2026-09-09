class Solution {
public:
    int usingdp(int n,vector<int>&dp){
    if(n<=2)return n;
    if(dp[n]!=-1){
        return dp[n];
    } 
    dp[n]=usingdp(n-1,dp)+usingdp(n-2,dp);
    return dp[n];
    }  
    int climbStairs(int n) {
    vector<int>dp(n+1,-1);
    int ans=usingdp(n,dp);
    return ans;
    }
};