class Solution {
public:
    int totalMoney(int n) {
        int total=0;
        int count=1;
        int week=0;
        for(int i=1;i<=n;i++){
            if(i%7==1){
                week++;
                count=week;
            }
            total+=count++;
        }
        return total;
    }
};