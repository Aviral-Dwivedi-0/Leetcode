class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> answer;
        for(int i=0;i<nums.size();i++){
            answer.insert(nums[i]);
            int rev=0;
            while(nums[i]>0){
                rev=rev*10+nums[i]%10;
                nums[i]/=10;
            }
            answer.insert(rev);
        }
        return answer.size();
    }
};