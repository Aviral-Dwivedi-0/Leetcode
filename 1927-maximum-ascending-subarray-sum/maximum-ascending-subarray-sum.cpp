class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum=0;
        nums.push_back(-1);
        int maximum=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i+1]>nums[i]){
                sum+=nums[i];
                maximum=max(maximum,sum);
            }
            else{
                sum+=nums[i];
                maximum=max(maximum,sum);
                sum=0;
            }
        }
        // if(nums[n-1]>nums[n-2]){
        //     sum+=nums[n-1];
        //     maximum=max(maximum,sum);
        // }
        // else{
        //     maximum=max(maximum,nums[n-1]);
        // }
        return maximum;
    }
};