class Solution {
private:
    void dfs(int node, vector<vector<int>>& adjm, int (&visited)[51], vector<int>& component) {
        visited[node] = 1;
        component.push_back(node);
        for (int i = 0; i < adjm.size(); i++) {
            if (adjm[node][i] == 1 && !visited[i]) {
                dfs(i, adjm, visited, component);
            }
        }
    }

    bool isComplete(vector<int>& component, vector<vector<int>>& adjm) {
        int k = component.size();
        for (int i = 0; i < k; i++) {
            for (int j = i + 1; j < k; j++) {
                if (adjm[component[i]][component[j]] == 0)
                    return false;
            }
        }
        return true;
    }

public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        int visited[51] = {0};
        vector<vector<int>> adjm(n, vector<int>(n, 0));
        for (auto& e : edges) {
            adjm[e[0]][e[1]] = 1;
            adjm[e[1]][e[0]] = 1;
        }

        int counter = 0;
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                vector<int> component;
                dfs(i, adjm, visited, component);
                if (isComplete(component, adjm))
                    counter++;
            }
        }
        return counter;
    }
};
