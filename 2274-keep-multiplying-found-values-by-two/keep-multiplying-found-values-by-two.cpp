class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int hash[2001]={0};
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]=hash[nums[i]]+1;
        }
        int loop=1;
        while(loop){
            if(hash[original]>0){
                original*=2;
            }
            else{
                return original;
            }
        }
        return -1;
    }
};