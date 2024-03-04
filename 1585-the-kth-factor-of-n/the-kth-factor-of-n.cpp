class Solution {
public:
    int kthFactor(int n, int k) {
        int factno=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                factno++;
                if(factno==k){
                    return i;
                }
            }
        }
        return -1;
    }
};