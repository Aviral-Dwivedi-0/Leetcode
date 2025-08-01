class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n=nums.size();
        int diff=abs(nums[0]-nums[n-1]);
        for(int i=1;i<nums.size();i++){
            diff=max(diff,abs(nums[i]-nums[i-1]));
        }
        return diff;
    }
};