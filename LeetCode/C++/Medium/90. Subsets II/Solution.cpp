class Solution {
public:
    void solve(vector<vector<int>>& v,vector<int>vi,int index,vector<int>nums){
        if(index>=nums.size()){
            v.push_back(vi);
            return;
        }
        vi.push_back(nums[index]);
        solve(v,vi,index+1,nums);
        vi.pop_back();
         while(index+1<nums.size() && nums[index]==nums[index + 1])
            index++;
        solve(v,vi,index+1,nums);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
     vector<vector<int>>v;
     vector<int>vi;
     solve(v,vi,0,nums);
     return v;   
    }
};