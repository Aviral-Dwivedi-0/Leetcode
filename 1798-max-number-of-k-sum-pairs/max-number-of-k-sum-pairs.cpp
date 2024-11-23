class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==k){
        //             nums.erase(nums.begin()+j);
        //             nums.erase(nums.begin()+i);
        //             count++;
        //             i--;
        //         }
        //     }
        // }
        sort(nums.begin(),nums.end());
        int first=0;
        int last=nums.size()-1;
        while(first<last){
            if(nums[first]+nums[last]==k){
                count++;
                first++;
                last--;
            } 
            else if(nums[first]+nums[last]>k) last--;
            else  first++;
        }
        return count;
    }
};