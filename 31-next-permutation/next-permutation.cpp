class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //Using STL
        //next_permutation(nums.begin(),nums.end());

        //STL Implementation
        int n=nums.size();
        int index=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }
        if(index!=-1){
            for(int i=n-1;i>index;i--){
                if(nums[i]>nums[index]){
                    swap(nums[i],nums[index]);
                    break;
                }
            }
            int counter=1;
            for(int i=index+1;i<(n+index+1)/2;i++){
                swap(nums[i],nums[n-counter]);
                counter++;
            }
        }
        else{
            // for(int i=0;i<n/2;i++){
            //     swap(nums[i],nums[n-i-1]);
            // }
            reverse(nums.begin(),nums.end());
        }
    }
};