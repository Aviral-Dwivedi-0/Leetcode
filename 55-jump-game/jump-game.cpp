class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1) return true;
        if(nums[0]==0) return false;
        int jump=nums[0];
        int n=nums.size();
        for(int i=1;i<n-1;i++){
            jump-=1;
            jump=max(jump,nums[i]);
            if(jump<=0) return 0;
        }
        return true;
    }
};