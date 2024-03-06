class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int dsum=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int n=nums[i];
            while(n>0){
                dsum+=n%10;
                n=n/10;
            }
        }
        return abs(dsum-sum);
    }
};