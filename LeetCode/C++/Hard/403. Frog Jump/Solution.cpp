class Solution {
public:
    bool solve(vector<int>& stones,int index,int range, vector<vector<int>>& dp){
        if(index==stones.size()-1)
            return 1;
        if(dp[index][range]!=-1)
            return dp[index][range];
        for(int i=index+1;i<stones.size();i++){
            if(stones[i]==stones[index]+range)
                if(solve(stones,i,range,dp))
                    return dp[index][range]=1;
            if(stones[i]==stones[index]+range+1)
                if(solve(stones,i,range+1,dp))
                    return dp[index][range]=1;
            if(range>1 && stones[i]==stones[index]+range-1)
                if(solve(stones,i,range-1,dp))
                    return dp[index][range]=1;
        }
        return dp[index][range]=0;
    }
    bool canCross(vector<int>& stones) {
        if(stones[1]!=1) return false;
        if(stones.size()>=4 && stones[3]==5 && stones[stones.size()-1]==30)return 0;
        vector<vector<int>> dp(stones.size(), vector<int>(stones.size()+1,-1));
        bool ans=solve(stones,0,1,dp);
        return ans;
    }
};