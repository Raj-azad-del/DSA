class Solution {
public:
    bool isSubsequence(string s, string t) {
        int k=0;
        if
       for(int i=0;i<t.size();i++){
        if(s[k]==t[i] && i<t.size()){
            k++;continue;
        }
        if(k!=s.size()-1 && i==t.size()-1 && s[k]!=t[i]){
            return false;
        }
       }
       return true; 
    }
};