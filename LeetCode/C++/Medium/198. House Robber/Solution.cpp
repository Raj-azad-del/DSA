class Solution {
public:
    int rob(vector<int>& nums) {
        int sum=0;
        int new_sum=0;
     for(int i=0;i<nums.size();i+=2){
        sum=sum+nums[i];
     }   
     for(int i=1;i<nums.size();i+=2){
        new_sum=new_sum+nums[i];
     }
     int res=max(sum,new_sum);
     return res;
    }
};