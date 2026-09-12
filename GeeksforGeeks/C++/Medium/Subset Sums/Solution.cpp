class Solution {
  public:
    void solve(vector<int>arr,vector<int>&v,int index,int sum){
        if(index>=arr.size()){
            v.push_back(sum);
            return;
        }
        sum=sum+arr[index];
        solve(arr,v,index+1,sum);
        sum=sum-arr[index];
        solve(arr,v,index+1,sum);
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int>v;
        solve(arr,v,0,0);
        return v;
    }
};