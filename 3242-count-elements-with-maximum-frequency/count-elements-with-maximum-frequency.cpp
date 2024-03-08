class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max_freq=count(nums.begin(),nums.end(),nums[0]);
        int num=1;
        for(int i=1;i<nums.size();i++){
            if((nums[i]!=nums[i-1]) && ((count(nums.begin(),nums.end(),nums[i]))==max_freq)){
                num++;
            }
            else if(nums[i]!=nums[i-1] && (count(nums.begin(),nums.end(),nums[i]))>max_freq){
                max_freq=count(nums.begin(),nums.end(),nums[i]);
                num=1;
            }
        }
        return num*max_freq;
    }
};