class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        else if(x==0) return true;
        int l=(int)(log10(x)+1);
        long rev=0;
        long copy=x;
        while(copy>0){
            rev=rev*10+copy%10;
            copy/=10;
        }
        return (rev==x);
    }
};