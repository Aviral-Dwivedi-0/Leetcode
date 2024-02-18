class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if((count(nums.begin(),nums.end(),nums[i]))==n/2){
                return nums[i];
            }
        }
        return 0;
    }
};