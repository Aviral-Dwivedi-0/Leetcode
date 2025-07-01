class Solution {
private:
    void dfs(int row, int col, vector<vector<char>>& board, vector<vector<int>>& visited) {
        visited[row][col] = 1;
        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};
        for (int i = 0; i < 4; i++) {
            int newRow = row + drow[i];
            int newCol = col + dcol[i];
            if (newRow >= 0 && newCol >= 0 && newRow < board.size() && newCol < board[0].size() &&
                !visited[newRow][newCol] && board[newRow][newCol] == 'O') {
                dfs(newRow, newCol, board, visited);
            }
        }
    }

public:
    void solve(vector<vector<char>>& board) {
        if (board.empty()) return; 
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));


        for (int j = 0; j < m; j++) {
            if (!visited[0][j] && board[0][j] == 'O')
                dfs(0, j, board, visited);
            if (!visited[n - 1][j] && board[n - 1][j] == 'O')
                dfs(n - 1, j, board, visited);
        }

    
        for (int i = 0; i < n; i++) {
            if (!visited[i][0] && board[i][0] == 'O')
                dfs(i, 0, board, visited);
            if (!visited[i][m - 1] && board[i][m - 1] == 'O')
                dfs(i, m - 1, board, visited);
        }

        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!visited[i][j] && board[i][j] == 'O')
                    board[i][j] = 'X';
            }
        }
    }
};
