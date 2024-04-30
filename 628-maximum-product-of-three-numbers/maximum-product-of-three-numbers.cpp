class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int prod1=nums[n-2]*nums[n-1]*nums[n-3];
        int prod2=nums[0]*nums[1]*nums[n-1];
        int prod3=nums[0]*nums[1]*nums[2];
        int max1= max(prod1,prod2);
        return max(max1,prod3);
    }
};