class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> numbers;
        int counter=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                counter++;
            }
            else{
                numbers.push_back(counter);
                counter=0;
            }
        }
        numbers.push_back(counter);
        return *max_element(numbers.begin(),numbers.end());
    }
};