class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        int leftsum=0;
        int rightsum=0;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                leftsum=0;
                rightsum=nums[nums.size()-1]-nums[0];
                if(leftsum==rightsum) return 0;
            }
            else if(i==nums.size()-1){
                rightsum=0;
                leftsum=nums[nums.size()-2];
                if(rightsum==leftsum) return nums.size()-1;
            }
            else{
                leftsum=nums[i-1];
                rightsum=nums[nums.size()-1]-nums[i];
                if(leftsum==rightsum) return i;
            }
        }
        return -1;
    }
};