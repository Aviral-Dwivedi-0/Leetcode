class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int hash[2501]={0};
        int n=grid.size();
        vector<int> answer;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                hash[grid[i][j]]++;
                if(hash[grid[i][j]]==2) answer.push_back(grid[i][j]);
            }
        }
        for(int i=1;i<=n*n;i++){
            if(hash[i]==0){
                answer.push_back(i);
            }
        }
        return answer;
    }
};