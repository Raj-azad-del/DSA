class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            int maxi=*max_element(nums.begin(),nums.begin()+i+1);
            int mini=*min_element(nums.begin()+i,nums.end());
            int res=maxi-mini;
            v.push_back(res);
        }
        for(int i=0;i<v.size();i++){
            if(v[i]<=k){
                return i;
            }
        }
        return -1;
    }
};