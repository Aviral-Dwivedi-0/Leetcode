class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int high=accumulate(nums.begin(),nums.end(),0);
        int low=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            int number=1;
            int sum=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]+sum>mid){
                    number++;
                    sum=nums[i];
                }
                else{
                    sum+=nums[i];
                }
            }
            if(number<=k) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};