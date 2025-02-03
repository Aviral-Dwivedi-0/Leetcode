class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc=1;
        int dec=1;
        int answer=1;;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                dec=1;
                inc++;
            }
            else if(nums[i+1]<nums[i]){
                inc=1;
                dec++;
            }
            else{
                inc=1;
                dec=1;
            }
            answer=max(answer,inc);
            answer=max(answer,dec);
        }
        return answer;
    }
};