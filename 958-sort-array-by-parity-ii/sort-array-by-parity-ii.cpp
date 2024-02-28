class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int even=0;
        int odd=1;
        int len=nums.size();
        vector<int> answer(len,0);
        for(int i=0;i<len;i++){
            if(nums[i]%2==0){
                answer[even]=nums[i];
                even+=2;
            }
            else{
                answer[odd]=nums[i];
                odd+=2;
            }
        }
        return answer;
    }
};