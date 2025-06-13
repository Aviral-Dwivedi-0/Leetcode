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

        // map<int,int> mpp;
        // if(nums.size()==1) return nums[0];
        // for(auto i:nums){
        //     mpp[i]++;
        // }
        // while(k>0){
        //     auto it=prev(mpp.end());
        //     if(k==1) return it->first;
        //     else {
        //         if(it->second==1){
        //             mpp.erase(it);
        //             k--;
        //         }
        //         else{
        //             it->second--;
        //             k--;
        //         }
        //     }
        // }
        // return -1;
    }
};