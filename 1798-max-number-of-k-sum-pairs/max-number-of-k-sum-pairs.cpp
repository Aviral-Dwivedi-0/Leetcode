class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count=0;
        sort(nums.begin(),nums.end());
        int first=0;
        int last=nums.size()-1;
        while(first<last){
            if(nums[first]+nums[last]==k){
                count++;
                first++;
                last--;
            } 
            else if(nums[first]+nums[last]>k) last--;
            else  first++;
        }
        return count;
    }
};