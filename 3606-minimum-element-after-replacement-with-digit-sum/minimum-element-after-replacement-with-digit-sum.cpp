class Solution {
public:
    int minElement(vector<int>& nums) {
        int minimum=10000;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            while(nums[i]>0){
                sum+=nums[i]%10;
                nums[i]/=10;
            }
            minimum=min(minimum,sum);
        }
        return minimum;
    }
};