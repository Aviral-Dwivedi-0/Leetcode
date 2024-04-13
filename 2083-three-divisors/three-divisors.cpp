class Solution {
public:
    bool isThree(int n) {
        int divisor=0;
        int i=1;
        while(divisor<=3 && i<=n){
            if(n%i==0) divisor++;
            i++;
        }
        return divisor==3;
    }
};