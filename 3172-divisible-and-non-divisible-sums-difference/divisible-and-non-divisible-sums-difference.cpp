class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum1=0;
        int sum2=0;
        int i=1;
        int j=1;
        while(i<=n){
            if(i%m!=0){
                sum1+=i;
            }
            i++;
        }
        while(j<=n){
            if(j%m==0){
                sum2+=j;
            }
            j++;
        }
        return sum1-sum2;
    }
};