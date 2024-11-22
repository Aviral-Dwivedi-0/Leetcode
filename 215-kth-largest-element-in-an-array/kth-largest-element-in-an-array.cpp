class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // int c=0;
        // if(k>nums.size()) return 0;
        // for(int i=0;i<nums.size();i++){
        //     c++;
        //     if(c!=k){
        //     int m=*max_element(nums.begin(),nums.end());
        //     for(int j=0;j<nums.size();j++){
        //         if(nums[j]==m){
        //             nums.erase(nums.begin()+j,nums.end());
        //             break;
        //         }
        //     }
        //     }
        //     else if(c==k){
        //         return *max_element(nums.begin(),nums.end());
        //     }
        // }
        // return 0;
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