class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        int counter=0;
        for(int i=0;i<n-1;i++){
            if(abs(nums[n-1]-2*nums[i])%2==0) counter++;
        }
        return counter;
    }
};