class Solution {
public:
    bool isPowerOfThree(int n) {
        int k=0;
    for(int i=0;i<31;i++){
        if( INT_MIN<n<INT_MAX){
            if(pow(3,i)==n){
                k=1;
                break;
            }
        }
    }  
    return k;  
    }
};