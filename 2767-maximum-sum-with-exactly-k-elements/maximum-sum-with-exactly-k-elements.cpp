class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l=nums.size();
        int counter=0;
        int sum=0;
        while(counter!=k){
            sum+=nums[l-1];
            nums[l-1]+=1;
            counter++;
        }
        return sum;
    }
};