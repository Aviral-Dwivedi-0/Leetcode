class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            int divisors=0;
            for(int i=0;i<nums.size();i++){
                divisors+=ceil((double)(nums[i])/(double)mid);
            }
            if(divisors>threshold) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};