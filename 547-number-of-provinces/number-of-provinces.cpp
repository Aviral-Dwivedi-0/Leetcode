class Solution {
private:
    void dfs(int node, vector<vector<int>>& isConnected, int (&visited)[201]){
        visited[node]=1;
        for(int i=0;i<isConnected[node].size();i++){
            if(isConnected[node][i] == 1 && !visited[i]){
                dfs(i,isConnected,visited);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int visited[201]={0};
        int count=0;
        int n=isConnected.size();
        for(int i=0;i<n;i++){
            if(!visited[i]){
                count++;
                dfs(i,isConnected,visited);
            }
        }
        return count;
    }
};