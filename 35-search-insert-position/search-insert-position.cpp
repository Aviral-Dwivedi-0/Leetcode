class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // //Solution 1
        // int answer=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        // return answer;

        //Solution 2
        int answer=nums.size();
        int low=0;
        int high=answer-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=target){
                answer=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return answer;
    }

};