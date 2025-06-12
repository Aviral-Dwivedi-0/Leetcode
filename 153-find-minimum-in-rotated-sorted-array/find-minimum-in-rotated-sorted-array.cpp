class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            mini=min(mini,nums[i]);
        }
        return mini;
        // int n=nums.size();
        // int low=0;
        // int high=n-1;
        // int answer=INT_MAX;
        // while(low<=high){
        //     int mid=low+(high-low)/2;
        //     //sorted in left half
        //     if(nums[mid]>=nums[low]){
        //         answer=min(answer,nums[low]);
        //         low=mid+1;
        //     }
        //     //sorted in right half
        //     else{
        //         answer=min(answer,nums[mid]);
        //         high=mid-1;
        //     }
        // }
        // return answer;
    }
};