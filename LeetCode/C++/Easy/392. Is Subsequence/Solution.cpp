class Solution {
public:
    bool isSubsequence(string s, string t) {
        int k=0;
        if(s.size()==0)return true;
        if(t.size()==0)return false;
       for(int i=0;i<t.size();i++){
        if(s[k]==t[i] && i<t.size()){
            if(k==s.size()-1)return true;
            k++;
        }
        if((k!=s.size()-1 && i==t.size()-1)||(k==s.size()-1 && i==t.size()-1 && s[k]!=t[i])){
            return false;
        }
       }
       return true; 
    }
};