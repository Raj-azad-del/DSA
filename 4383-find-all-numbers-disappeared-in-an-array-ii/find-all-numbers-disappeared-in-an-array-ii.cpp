#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<int>v;
        vector<vector<int>>res;
        unordered_set<int> s(nums.begin(), nums.end());
        for(int i=lower;i<=upper;i++){
            if(s.find(i)==s.end()){
                v.push_back(i);
            }
            else {
                if(!v.empty()){
                    res.push_back({v[0],v[v.size()-1]});
                    v.clear();
                }
            }
        }
        if(!v.empty()){
            res.push_back({v[0],v[v.size()-1]});
            v.clear();
        }
        return res;
    }
};