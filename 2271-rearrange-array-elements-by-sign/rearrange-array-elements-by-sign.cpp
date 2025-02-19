class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> answer(n,0);
        int even=0;
        int odd=1;
        int i=0;
        while(even<n && odd<n){
            if(nums[i]>0){
                answer[even]=nums[i];
                even+=2;
            }
            else {
                answer[odd]=nums[i];
                odd+=2;
            }
            i++;
        }
        while(even<=n-1){
            answer[even]=nums[i];
            i++;
            even+=2;
        }
        while(odd<=n-1){
            answer[odd]=nums[i];
            i++;
            odd+=2;
        }
        return answer;
    }
};