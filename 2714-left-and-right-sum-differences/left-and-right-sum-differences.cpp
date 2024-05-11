class Solution {
public:
    std::vector<int> leftRightDifference(std::vector<int>& nums) {
        std::vector<int> answer;
        int length = nums.size();
        if (length == 0) return answer; 
        int sum = 0;
        for (int i = 0; i < length; i++) {
            sum += nums[i];
        }
        int leftsum = 0;
        for (int i = 0; i < length; i++) {
            int rightsum = sum - nums[i] - leftsum; 
            answer.push_back(std::abs(leftsum - rightsum));
            leftsum += nums[i]; 
        }
        return answer;
    }
};