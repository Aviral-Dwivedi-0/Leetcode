class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int dsum=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(nums[i]>0){
                dsum+=nums[i]%10;
                nums[i]/=10;
            }
        }
        return abs(dsum-sum);
    }
};