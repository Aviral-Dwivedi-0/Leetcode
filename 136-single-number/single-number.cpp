class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // METHOD 1
        // int l=nums.size();
        // for(int i=0;i<l;i++){
        //     if((count(nums.begin(),nums.end(),nums[i]))==1){
        //         return nums[i];
        //     }
        // }
        // return -1;

        //METHOD 2
        int result=0;
        for(auto i:nums){
            result^=i;
        }
        return result;
    }
};