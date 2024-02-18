class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> answer;
        int k=0;
        for(int i=1;i<=nums.size();i++){
            if((count(nums.begin(),nums.end(),i))==2){
                answer.push_back(i);
            }
            else if((count(nums.begin(),nums.end(),i))==0){
                k=i;
            }
        }
        answer.push_back(k);
        return answer;
    }
};