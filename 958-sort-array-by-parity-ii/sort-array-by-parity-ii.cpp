class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int l=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> oddl;
        vector<int> evenl;
        for(int i=0;i<l;i++){
            if(nums[i]%2==0){
                evenl.push_back(nums[i]);
            }
            else oddl.push_back(nums[i]);
        }
        nums.clear();

        for(int i=0;i<l/2;i++){
            nums.push_back(evenl[i]);
            nums.push_back(oddl[i]);
        }
        return nums;
    }
};