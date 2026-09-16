class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty())return 0;
        vector<char>v;
        int res=0;
      for(char ch:s){
        v.push_back(ch);
      }

      int y=0;
      for(int i=0;i<v.size();i++){
         vector<char>g;
           for(int j=y;j<=i;j++){
            
             g.push_back(v[j]);
           }
           sort(g.begin(),g.end());
           int ki=g.size();
           g.erase(unique(g.begin(),g.end()),g.end());
           int yu=g.size();
           if(ki==yu){
            int fi=g.size();
            res=max(res,fi);
           }
           else{
            y++;i--;
           }
      }
      return res;
    }
};