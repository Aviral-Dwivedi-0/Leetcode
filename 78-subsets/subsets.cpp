class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            int number=nums[0];
            vector<vector<int>> answer ={{},{number}};
            return answer;
        }
        else{
            int last=nums[n-1];
            nums.pop_back();
            vector<vector<int>> answer = subsets(nums);
            vector<vector<int>> pushing;
            for(int i=0;i<answer.size();i++){
                vector<int> pushed=answer[i];
                pushed.push_back(last);
                pushing.push_back(pushed);
            }
            answer.insert(answer.end(),pushing.begin(),pushing.end());
            return answer;
        }
        return {{213321}};
    }
};