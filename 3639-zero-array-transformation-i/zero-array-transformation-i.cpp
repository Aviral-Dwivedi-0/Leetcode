class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n =nums.size();
        vector<int> prefix(n+1,0);
        for(int i=0;i<queries.size();i++){
            int start=queries[i][0];
            int end=queries[i][1];
            prefix[start]-=1;
            prefix[end+1]++;
        }
        for(int i=1;i<prefix.size();i++){
            prefix[i]+=prefix[i-1];
        }
        for(int i=0;i<n;i++){
            if(prefix[i]+nums[i]>0){
                return false;
            }
        }
        return true;
    }
};