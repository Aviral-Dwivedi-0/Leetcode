class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        queue<pair<int,int>> q;
        int source=image[sr][sc];
        q.push({sr,sc});
        visited[sr][sc]=1;
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        while(!q.empty()){
            int cr=q.front().first;
            int cc=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nr=cr+dr[i];
                int nc=cc+dc[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && image[nr][nc]==source && visited[nr][nc]==0){
                    visited[nr][nc]=1;
                    q.push({nr,nc});
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(visited[i][j]){
                    image[i][j]=color;
                }
            }
        }
        return image;
    }
};