class Solution {
public:
    int tribonacci(int n) {
        int ar[38];
        ar[0]=0;
        ar[1]=1;
        ar[2]=1;
        for(int i=3;i<38;i++){
            ar[i]=ar[i-1]+ar[i-2]+ar[i-3];
        }
        return ar[n];
    }
};