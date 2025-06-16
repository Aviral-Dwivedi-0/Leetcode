class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minimum=nums[0];
        int difference=-1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-minimum > difference && nums[i]!=minimum){
                difference=nums[i]-minimum;
            }
            else if(minimum>nums[i]){
                minimum=nums[i];
            }
        }
        return difference;
    }
};