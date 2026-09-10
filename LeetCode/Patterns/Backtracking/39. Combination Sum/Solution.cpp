class Solution {
public:
        void usingrecursion(int index,int target,vector<int>& candidates,vector<int>&temp,vector<vector<int>>&v){
            if(index==candidates.size()){
                if(target==0)v.push_back(temp);
                return;
            }
            if(candidates[index]<=target){
                temp.push_back(candidates[index]);
                usingrecursion(index,target-candidates[index],candidates,temp,v);
                temp.pop_back();
            }
            usingrecursion(index+1,target,candidates,temp,v);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        vector<vector<int>>v;
        usingrecursion(0,target,candidates,temp,v);
        return v;
        
    }
};