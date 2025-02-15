class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int l=*max_element(nums.begin(),nums.end());
        if(l<=0) return l;
        int maxsum=0;
        int sum=0;
        for(auto i:nums){
            sum+=i;
            maxsum=max(maxsum,sum);
            if(sum<0){
                sum=0;
            }
        }
        return maxsum;
    }
};