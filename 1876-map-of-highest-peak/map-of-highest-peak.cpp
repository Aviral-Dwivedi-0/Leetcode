class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int n=isWater.size();
        int m=isWater[0].size();
        queue<pair<pair<int,int>,int>> q;
        vector<vector<int>>visited(n,vector<int>(m,0));
        vector<vector<int>> distances(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(isWater[i][j]==1){
                    visited[i][j]=1;
                    q.push({{i,j},0});
                } 
            }
        }
        int dist=0;
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        while(!q.empty()){
            int cr=q.front().first.first;
            int cc=q.front().first.second;
            int t=q.front().second;
            q.pop();
            dist=max(dist,t);
            for(int i=0;i<4;i++){
                int nr=cr+dr[i];
                int nc=cc+dc[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && !visited[nr][nc] && isWater[nr][nc]==0){
                    visited[nr][nc]=1;
                    q.push({{nr,nc},t+1});
                    distances[nr][nc]=t+1;
                }
            }
        }
        return distances;
    }
};