class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int hash[100000]={0};
        for(int i=0;i<nums.size();i++){
            hash[nums[i]+10000]++;
        }
        for(int i=99999;i>=0;i--){
            if(hash[i]>0){
                if(hash[i]>=k) return i-10000;
                else k=k-hash[i];
            }
        }
        return -1;
    }
};