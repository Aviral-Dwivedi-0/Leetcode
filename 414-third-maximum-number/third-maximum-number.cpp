class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int>new_num(nums.begin(),nums.end());
        vector<int>final_nums(new_num.begin(),new_num.end());
        sort(final_nums.begin(),final_nums.end());
        int n= final_nums.size();
        if(n<3){
            return *max_element(final_nums.begin(),final_nums.end());
        }
        else{
            int a= final_nums[n-3];
            return a;
        }
    }
};