class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>> answer(grid.size() - 2, vector<int>(grid[0].size() - 2, 0));
        for(int i = 0; i < grid.size() - 2; i++){
            for(int j = 0; j < grid[i].size() - 2; j++){
                int maximum = 0;
                int v1 = max(grid[i][j], grid[i][j + 1]);
                int f1 = max(v1, grid[i][j + 2]);
                int v2 = max(grid[i + 1][j], grid[i + 1][j + 1]);
                int f2 = max(v2, grid[i + 1][j + 2]);
                int v3 = max(grid[i + 2][j], grid[i + 2][j + 1]);
                int f3 = max(v3, grid[i + 2][j + 2]);
                maximum = max(f1, f2);
                maximum = max(maximum, f3);
                answer[i][j] = maximum;
            }
        }
        return answer;
    }
};
