class Solution {
public:
    void solve(vector<int>nums,vector<vector<int>>&v,int index,vector<int>vi){
        if(index>=nums.size()){
            v.push_back(vi);
            return;
        }
        vi.push_back(nums[index]);
        solve(nums,v,index+1,vi);
        vi.pop_back();
        solve(nums,v,index+1,vi);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
     vector<vector<int>>v;
     vector<int>vi;
     solve(nums,v,0,vi);
     return v;  
    }
};