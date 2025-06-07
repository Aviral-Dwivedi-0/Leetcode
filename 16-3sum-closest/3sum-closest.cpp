class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int mini=INT_MAX;
        int n=nums.size();
        int answer=0;
        for(int i=0;i<n;i++){
            if(i!=0 and nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==target) return target;
                if(mini>abs(target-sum)){
                    mini=abs(target-sum);
                    answer=sum;
                }
                if(sum<target){
                    j++;
                }
                else{
                    k--;
                }
            }
            // while(j<k && nums[j]==nums[j-1]) j++;
            // while(j<k && nums[k]==nums[k+1]) k--;
        }
        return answer;
    }
};