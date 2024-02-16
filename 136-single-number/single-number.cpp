class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int l=nums.size();
        for(int i=0;i<l;i++){
            if((count(nums.begin(),nums.end(),nums[i]))==1){
                return nums[i];
            }
        }
        return -1;
    }
};