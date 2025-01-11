class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;
        vector<int> answer;
        for(auto i: nums){
            if(i>0) positive.push_back(i);
            else negative.push_back(i);
        }
        for(int i=0;i<positive.size();i++){
            answer.push_back(positive[i]);
            answer.push_back(negative[i]);
        }
        return answer;
    }
};