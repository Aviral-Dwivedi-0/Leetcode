class Solution {
public:
    void sortColors(vector<int>& nums) {
        // 1st Method
        // int hash[3]={0};
        // for(int i=0;i<nums.size();i++){
        //     hash[nums[i]]++;
        // }
        // int index=0;
        // while(hash[0]>0 || hash[1]>0 || hash[2]>0){
        //     if(hash[0]>0){
        //         nums[index]=0;
        //         hash[0]--;
        //     }
        //     else if(hash[1]>0){
        //         nums[index]=1;
        //         hash[1]--;
        //     }
        //     else{
        //         nums[index]=2;
        //         hash[2]--;
        //     }
        //     index++;
        // }

        //2nd Method (Best) (Dutch National FlagAlgo)
        int low=0;
        int high=nums.size()-1;
        int mid=0;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};