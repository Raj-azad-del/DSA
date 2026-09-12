class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>k;
        int beg=0;
        int end=nums.size();
        vector<int>v;
        k.push_back(v);
        for(int i=0;i<nums.size();i++){
            int s=k.size();
            for(int j=0;j<s;j++){
                vector<int>z=k[j];
                z.push_back(nums[i]);
                k.push_back(z);
            }
        }
        return k;
    }
};
