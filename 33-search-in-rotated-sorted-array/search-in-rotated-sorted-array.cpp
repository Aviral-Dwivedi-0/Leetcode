class Solution {
public:
    int search(vector<int>& nums, int target) {
        // // O(n)
        // for(int i=0;i<nums.size();i++){
        //     if(target==nums[i]) return i;
        // }
        // return -1;

        //O(logn)
        int low=0;
        int n=nums.size();
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]>=nums[low]){
                if(nums[low]<=target && target<=nums[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(nums[mid]<=target && target<=nums[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};