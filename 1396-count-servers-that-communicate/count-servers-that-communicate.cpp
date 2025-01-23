class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int communication=0;
        vector<int> rows(m,0);
        vector<int> columns(n,0); 
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    rows[i]++;
                    columns[j]++;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){ 
                    if(rows[i]>1 || columns[j]>1){
                        communication++;
                    }
                }
            }
        }
        return communication;

    }
};