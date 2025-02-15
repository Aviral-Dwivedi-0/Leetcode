class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Moore's Voting Algo
        int counter=0;
        int element;
        for(int i=0;i<nums.size();i++){
            if(counter==0){
                element=nums[i];
                counter++;
            }
            else if(nums[i]==element){
                counter++;
            }
            else{
                counter--;
            }
        }
        return element;
    }
};