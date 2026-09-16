class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int maxi=0;

        unordered_map<char,int> v;

        for(int i=0; i<256; i++){
            v[(char)i]=-1;
        }
        for(int i=0; i<s.size(); i++){
            if(v[s[i]]!=-1){
                l=max(l,v[s[i]]+1);
            }

            v[s[i]]=i;
            maxi=max(maxi,i-l+1);
            r++;
        }

        return maxi;
    }
};