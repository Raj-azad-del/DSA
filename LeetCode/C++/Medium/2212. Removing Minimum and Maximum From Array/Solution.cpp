class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mi=0;
        int mx=0;
        int mini=nums[0];
        int maxi=nums[0];
        vector<int>v;
        if(nums.size()==1)return 1;
     for(int i=0;i<nums.size();i++){
        if(nums[i]>maxi){
            maxi=max(nums[i],maxi);
            mx=i;
        }
        if(nums[i]<mini){
            mini=min(nums[i],mini);
            mi=i;
        }
     }  
     int res=0;
     if(mi<mx){
        v.push_back(mx+1);
        v.push_back(nums.size()-mi);
     }
     if(mi>mx){
        v.push_back(mi+1);
        v.push_back(nums.size()-mx);
     }
     
     if(mi<mx){
        res=res+mi+1;
         cout<<res<<endl;
        res=res+(nums.size()-mx);
        v.push_back(res);
         cout<<res<<endl;
     }
     if(mi>mx){
        cout<<"else part"<<endl;
        res=res+mx+1;
        cout<<res<<endl;
        res=res+(nums.size()-mi);
        v.push_back(res);
         cout<<res<<endl;
     }
     int fin=v[0];
     for(int i=0;i<v.size();i++){
        fin=min(fin,v[i]);
     }
     
     return fin;
    }
};