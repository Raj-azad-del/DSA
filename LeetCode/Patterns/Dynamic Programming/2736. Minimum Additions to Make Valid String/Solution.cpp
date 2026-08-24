class Solution {
public:
    int addMinimum(string word) {
        int count=0;
        if(word.size()==1){
            return 2;
        }
        if(word[0]=='b')count=count+1;
        if(word[0]=='c')count=count+2;
       for(int i=0;i<word.size()-1;i++){
        int n1=word[i];
        int n2=word[i+1];
        
        if(abs(n1-n2)==0){
            count=count+2;
        }
        else if(n2-n1==1)continue;
        else if(n2-n1==-1)count=count+1;
        else if(n2-n1==2){
            count=count+1;
        }
       } 
       if(word[word.size()-1]=='a'){
        count=count+2;
       }
       else if(word[word.size()-1]=='b'){
        count=count+1;
       }
       
       return count;
    }
};