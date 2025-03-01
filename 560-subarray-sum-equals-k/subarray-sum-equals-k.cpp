class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> m;
        int count=0;
        m.insert({0,1});
        int presum=0;
        for(int i=0;i<nums.size();i++){
            presum+=nums[i];
            if(m.find(presum-k)!=m.end()){
                count+=m[presum-k];
            }
            m[presum]++;
        }
        return count;
    }
};