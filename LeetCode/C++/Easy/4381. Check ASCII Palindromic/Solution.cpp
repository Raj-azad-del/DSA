class Solution {
public:
    string bitconv(int a){
        string str="";
        while(a!=0){
            int rem=a%2;
            a=a/2;
            string temp=to_string(rem);
            str=str+temp;
        }
        str=str+"0";
        reverse(str.begin(),str.end());
        return str;
    }
    bool isPalindromic(string s) {
        string st="";
       for(char ch:s){
        string te=bitconv(ch);
        st=st+te;
       }
       int i=0;
       int j=st.size()-1;
       cout<<st<<endl;
       while(i<j){
        if(st[i]!=st[j])return 0;
        i++;
        j--;
       }
        return 1;
    }
};