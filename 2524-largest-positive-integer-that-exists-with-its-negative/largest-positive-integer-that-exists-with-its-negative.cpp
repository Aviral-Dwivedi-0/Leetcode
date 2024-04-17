class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int number=0;
        for(int i=0;i<nums.size();i++){
            if((count(nums.begin(),nums.end(),(-1)*nums[i]))>=1){
                number=nums[i]*-1;
                return number;
            }
        }
        return -1;
    }
};