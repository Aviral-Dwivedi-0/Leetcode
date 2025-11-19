class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map<int,bool> mpp;
        for(auto it:nums){
            mpp[it]=true;
        }
        while(mpp.find(original)!=mpp.end()){
            original*=2;
        }
        return original;
    }
};