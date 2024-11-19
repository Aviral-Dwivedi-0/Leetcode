class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i=0;i<k;i++){
            int minimum=nums[0];
            int index=0;
            for(int j=0;j<nums.size();j++){
                if(minimum>nums[j]){
                    minimum=nums[j];
                    index=j;
                }
            }
            nums[index]*=multiplier;
        }
        return nums;
    }
};