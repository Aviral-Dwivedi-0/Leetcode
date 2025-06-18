class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> answer;
        vector<int> temp;
        for(int i=0;i<nums.size();i++){
            if((i+1)%3==0){
                temp.push_back(nums[i]);
                answer.push_back(temp);
                if(temp[2]-temp[0]>k) return {};
                temp.erase(temp.begin(),temp.end());

            }
            else{
                temp.push_back(nums[i]);
            }
        }
        return answer;
    }
};