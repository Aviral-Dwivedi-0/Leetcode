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
        return maximum;
    }
};