class Solution {
public:
    int search(vector<int>& nums, int target) {
        int high=nums.size()-1;
        int low=0;
        int k=-1;
     for(int i=0;i<nums.size();i++){
        int mid=(high+low)/2;
    if(target>nums[mid]){
        low=mid+1;

    }
    else if(target<nums[mid]){
        high=mid-1;
    }
    else if(target==nums[mid]){
        k=mid;
        break;
    }
     } 
     return k;  
    }
};