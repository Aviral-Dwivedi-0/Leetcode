class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefix=1;
        int suffix=1;
        int n=nums.size();
        int answer=nums[0];
        for(int i=0;i<nums.size();i++){
            if(prefix==0) prefix=1;
            if(suffix==0) suffix=1;
            prefix*=nums[i];
            suffix*=nums[n-1-i];
            answer=max(answer,max(prefix,suffix));
        }
        return answer;
    }
};