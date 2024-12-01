class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp;
        int length=nums.size();
        k=k%length;
        for(int i=0;i<length-k;i++){
            temp.push_back(nums[i]);
        }
        nums.erase(nums.begin(),nums.end()-k);
        nums.insert(nums.end(),temp.begin(),temp.end());
    }
};