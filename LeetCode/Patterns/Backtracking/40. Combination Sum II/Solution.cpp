class Solution {
public:
    void solve(vector<vector<int>>&v,vector<int>vi,vector<int>nums,int target,int sum,int index){
        if(sum==target){
            sort(vi.begin(),vi.end());
            if(find(v.begin(),v.end(),vi)==v.end()){
            v.push_back(vi);
            return;
            }
            else{
                return;
            }
        }
        if(index==nums.size()){
            return;
        }
        vi.push_back(nums[index]);
        sum=sum+nums[index];
        solve(v,vi,nums,target,sum,index+1);
        sum=sum-nums[index];
        vi.pop_back();
        solve(v,vi,nums,target,sum,index+1);

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
      vector<vector<int>>v;
      vector<int>vi;
      solve(v,vi,candidates,target,0,0);
      sort(v.begin(),v.end());
      return v;  
    }
};