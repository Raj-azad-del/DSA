class Solution {
public:
    bool calculate(int n){
        if(n==1)return true;
        if(n<1)return false;
        n=n/3;
        calculate(n);
        return true;
    }
    bool isPowerOfThree(int n) {
        int res=1;
     bool x=calculate(n);
     return x; 
    }
};