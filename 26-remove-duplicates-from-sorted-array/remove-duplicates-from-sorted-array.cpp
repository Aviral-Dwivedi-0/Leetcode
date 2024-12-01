class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index=1;
        while(index<nums.size()){
            if(nums[index]==nums[index-1]){
                nums.erase(nums.begin()+index);
                continue;
            }
            index++;
        }
        return nums.size();
    }
};