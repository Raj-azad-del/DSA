class Solution {
public:
    int binary(vector<int>& nums,int target,int i,int j){
        int mid=(i+j)/2;
        if(nums[mid]==target)return mid;
        if(i>j)return -1;
        if(nums[mid]<target)return binary(nums,target,mid+1,j);
        return binary(nums,target,i,mid-1);
    }
    int search(vector<int>& nums, int target) {
      int x=binary(nums,target,0,nums.size()-1);
      return x;  
    }
};