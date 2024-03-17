class Solution {
public:
    bool isPerfectSquare(int num) {
        long l=1;
        long r=num;
        while(l<=r){
            long mid=l+(r-l)/2;
            long ans=mid*mid;
            if(ans==num){
                return true;
            }
            else if(ans>num){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return false;
    }
};