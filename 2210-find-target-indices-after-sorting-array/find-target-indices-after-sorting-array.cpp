class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size() - 1; i++) {
            for(int j = 0; j < nums.size() - i - 1; j++) { 
                if(nums[j] > nums[j + 1]) { 
                    int temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
        }
        vector<int> answer;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                answer.push_back(i);
            }
        }
        return answer;
    }
};