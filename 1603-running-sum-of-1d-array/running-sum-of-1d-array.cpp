class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int rsum=0;
        vector<int> answer;
        for(int i=0;i<nums.size();i++){
            rsum+=nums[i];
            answer.push_back(rsum);
        }
        return answer;
    }
};