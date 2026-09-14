class Solution {
public:
    int solve(vector<int>& coins,int amount,int sum,int index,int& count){
        if(coins.size()>=1 && amount==0)return 1;
        if(sum==amount){
            count=count+1;
            return 0;
        }
        if(sum>amount)return 0;
        if(index>=coins.size())return 0;
        solve(coins,amount,sum+coins[index],index,count);
        solve(coins,amount,sum,index+1,count);
        return count;
    }
    int change(int amount, vector<int>& coins) {
        int count=0;
     int ans=solve(coins,amount,0,0,count);
     return ans;   
    }
};