class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if((count(nums.begin(),nums.end(),nums[i]))>2){
                return false;
            }
        }
        return true;
    }
};