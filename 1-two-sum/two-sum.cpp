class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        vector<int> answer;
        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            if(m.find(rem)!=m.end()){
                answer.push_back(i);
                answer.push_back(m[rem]);
                break;
            }
            m[nums[i]]=i;
        }
        return answer;
    }
};