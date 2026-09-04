class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>v;
        int mini=nums.size();
        for(int i=0;i<nums.size();i++){
            int maxi=*max_element(nums.begin(),nums.begin()+i);
            int mi=*min_element(nums.begin()+i,nums.end());
            v.push_back(maxi-mi);
        }
        int flag=0;
        for(int i=0;i<v.size();i++){
            if(v[i]<=k){
                mini=min(mini,i);
                flag=1;
            }
        }
        if(flag==1)return mini;
        return -1;
    }
};