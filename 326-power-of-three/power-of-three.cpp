class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }
        else{
            double ans=log10(n)/log10(3);
            return ((ans-(int)ans)==0);
        }
    }
};