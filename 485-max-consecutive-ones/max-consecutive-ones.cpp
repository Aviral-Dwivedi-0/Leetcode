class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // METHOD NUMBER 1

        // vector<int> numbers;
        // int counter=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==1){
        //         counter++;
        //     }
        //     else{
        //         numbers.push_back(counter);
        //         counter=0;
        //     }
        // }
        // numbers.push_back(counter);
        // return *max_element(numbers.begin(),numbers.end());


        // METHOD NUMBER 2
        int consecutive=0;
        int maxi=0;
        for(auto i:nums){
            if(i==1){
                consecutive++;
                maxi=max(maxi,consecutive);
            }
            else{
                consecutive=0;
            }
        }
        return maxi;
    }
};