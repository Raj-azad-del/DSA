class Solution {
public:
    void usingrecursion(int index,int target,vector<int>& candidates,vector<int>& temp,vector<vector<int>>& v){
        if(index==candidates.size()){
            if(target==0)v.push_back(temp);
            return;
        }
        if(candidates[index]<=target){
            temp.push_back(candidates[index]);
            usingrecursion(index+1,target-candidates[index],candidates,temp,v);
            temp.pop_back();
        }
        while(index+1<candidates.size() && candidates[index]==candidates[index+1])
            index++;
        usingrecursion(index+1,target,candidates,temp,v);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates,int target){
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>v;
        usingrecursion(0,target,candidates,temp,v);
        return v;
    }
};