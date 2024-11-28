class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        double answer;
        for(int i=k-1;i<nums.size();i++){
            if(i==k-1){
                answer=nums[i]/(double)k;
            }
            else{
                double element=(nums[i]-nums[i-k])/((double)k);
                answer=max(answer,element);
            }
        }
        return answer;
    }
};