class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single=0;
        int doubles=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=10){
                doubles+=nums[i];
            }
            else{
                single+=nums[i];
            }
        }
        return single!=doubles;
    }
};