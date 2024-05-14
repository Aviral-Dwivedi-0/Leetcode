class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int counter=0;
        bool first=true;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                if(first){
                    first=false;
                    counter=0;
                    continue;
                }
                else if(counter<k){
                    return false;
                }
                else{
                    counter=0;
                }
            }
            else{
                counter++;
            }
        }
        return true;
    }
};