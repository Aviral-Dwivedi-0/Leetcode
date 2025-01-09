class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int hash[201]={0};
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        vector<vector<int>> answer;
        int rows=0;
        for(int i=0;i<201;i++){
            rows=max(rows,hash[i]);
        }
        answer.resize(rows); // To resize the vector to contain specific number of rows.
        for(int i=0;i<rows;i++){
            for(int j=0;j<201;j++){
                if(hash[j]>0){
                    answer[i].push_back(j);
                    hash[j]--;
                }
            }
        }
        return answer;
    }
};