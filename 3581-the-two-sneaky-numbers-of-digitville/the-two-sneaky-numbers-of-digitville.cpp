class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int len=nums.size();
        vector<int> answer;
        vector<int> hash(len,0);
        for(int i=0;i<len;i++){
            hash[nums[i]]++;
        }
        for(int i=0;i<hash.size();i++){
            if(hash[i]==2) answer.push_back(i);
            if(answer.size()==2) break;
        }
        return answer;
    }
};