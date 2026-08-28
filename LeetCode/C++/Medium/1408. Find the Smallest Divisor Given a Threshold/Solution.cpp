class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int res;
     for(int i=1;i<INT_MAX;i++){
        int sum=0;
        for(int j=0;j<nums.size();j++){
            sum=sum+(ceil((double)nums[j]/i));
        }
        if(sum<=threshold){res=i; break;}
     }   
        return res;
    }
};