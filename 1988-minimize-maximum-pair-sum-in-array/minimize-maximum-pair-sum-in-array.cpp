class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maximum=0;
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            int sum=nums[i]+nums[j];
            maximum=max(maximum,sum);
            i++;
            j--;
        }
        return maximum;
    }
};