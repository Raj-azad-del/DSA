class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size()/2;
     unordered_map<int,int>res;
     for(int i=0;i<nums.size();i++){
        res[nums[i]]++;
     }
     for(auto &it:res){
        if(it.second>n)return it.first;
     }
     return 0;
    }
};